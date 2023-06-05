#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "SDL2/SDL.h"

class Window;

class Graphics
{
public:
    Graphics(const Window& window);
    ~Graphics();

    void BeginFrame();
    void EndFrame();
    void CleanUp();

    SDL_Renderer* GetRenderer() { return renderer; }

private:
    void Initialize(const Window &window);
    SDL_Renderer* renderer;
};

#endif
