#ifndef GAME_H
#define GAME_H

#include "core/logic/RisuProject.h"

class Game : RisuProject
{
public:
    Game(class Window &wnd, class Graphics &gfx);
    ~Game();
    
    virtual void Run() override;
};

#endif