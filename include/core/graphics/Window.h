#ifndef WINDOW_H
#define WINDOW_H

#include "SDL2/SDL.h"

class Window
{
public:
    Window(const char* name, int windowWidth, int windowHeight);
    ~Window();

    SDL_Window* GetMainWindow() const { return pWindow; }

private:
    void Initialize();
    void CleanUp();

    SDL_Window* pWindow;
    const char* pGameName;
    int width;
    int height;
};

#endif