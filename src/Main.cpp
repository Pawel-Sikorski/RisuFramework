#include <SDL2/SDL.h>
#include "core/graphics/Graphics.h"
#include "core/graphics/Window.h"
#include "game/Game.h"

int main(int argc, char* argv[])
{
    const char* gameName = "RisuFramework";
    int windowWidth = 800;
    int windowHeigt = 600;

    Window window(gameName, windowWidth, windowHeigt);
    Graphics graphics(window);

    Game myGame(window, graphics);

    bool quit = false;
    while(!quit)
    {
        SDL_Event event;
        while(SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT)
            {
                quit = true;
            }
        }

        myGame.Run();
    }
    
    return 0;
}
