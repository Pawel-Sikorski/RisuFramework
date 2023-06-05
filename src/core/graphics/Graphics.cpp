#include "core/graphics/Graphics.h"
#include "core/graphics/Window.h"

Graphics::Graphics(const Window& window) : renderer(nullptr)
{
    Initialize(window);
}

Graphics::~Graphics() 
{
    CleanUp();
}

void Graphics::Initialize(const Window& window)
{
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        SDL_Log("Failed to initialize SDL: %s", SDL_GetError());
        // Handle error
    }

    // Create a renderer
    renderer = SDL_CreateRenderer(window.GetMainWindow(), -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr)
    {
        SDL_Log("Failed to create SDL renderer: %s", SDL_GetError());
        // Handle error
    }

    // Set the drawing color to white
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
}

void Graphics::BeginFrame()
{
    // Clear the renderer with the drawing color
    SDL_RenderClear(renderer);
}

void Graphics::EndFrame()
{
    // Update the screen
    SDL_RenderPresent(renderer);
}

void Graphics::CleanUp()
{
    if (renderer != nullptr)
    {
        SDL_DestroyRenderer(renderer);
        renderer = nullptr;
    }
}
