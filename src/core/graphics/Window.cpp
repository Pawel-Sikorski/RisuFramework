#include "core/graphics/Window.h"

Window::Window(const char *name, int windowWidth, int windowHeight)
    :
    pGameName(name),
    width(windowWidth),
    height(windowHeight)

{
    Initialize();
}

Window::~Window()
{
    CleanUp();
}

void Window::Initialize()
{
    // Create a window
    pWindow = SDL_CreateWindow(pGameName, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
    if (pWindow == nullptr)
    {
        SDL_Log("Failed to create SDL window: %s", SDL_GetError());
        // Handle error
    }
}

void Window::CleanUp()
{
    if (pWindow != nullptr)
    {
        SDL_DestroyWindow(pWindow);
        pWindow = nullptr;
    }

    SDL_Quit();
}