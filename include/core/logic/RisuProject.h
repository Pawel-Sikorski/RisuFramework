#ifndef RISUPROJECT_H
#define RISUPROJECT_H   

#include <SDL2/SDL.h>

class RisuProject
{
public:
    RisuProject(class Window &wnd, class Graphics &gfx);
    ~RisuProject();

    virtual void Initialize();
    virtual void Run();
    virtual void HandleInput();
    virtual void UpdateLogic();
    virtual void UpdateGraphics();
    virtual void CleanUp();

private:
    class Window& window;
    class Graphics& graphics;
};

#endif