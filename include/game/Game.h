#ifndef GAME_H
#define GAME_H

#include "core/logic/RisuProject.h"

class Game : public RisuProject
{
public:
    Game(class Window &wnd, class Graphics &gfx);
    ~Game();

protected:
    virtual void Initialize() override;
    virtual void HandleInput() override;
    virtual void UpdateLogic() override;
    virtual void UpdateGraphics() override;
    virtual void CleanUp() override;

    /*******************/
    /**user variables**/
    /*******************/

private:
    /*******************/
    /**user variables**/
    /*******************/
    

public:
    /*******************/
    /**user variables**/
    /*******************/

};

#endif