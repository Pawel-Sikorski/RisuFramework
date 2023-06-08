#ifndef RISUPROJECT_H
#define RISUPROJECT_H   

#include <SDL2/SDL.h>

class RisuProject
{
public:
    RisuProject(class Window &wnd, class Graphics &gfx);
    ~RisuProject();

    void Run();

protected:
    virtual void Initialize() = 0;
    virtual void HandleInput() = 0;
    virtual void UpdateLogic() = 0;
    virtual void UpdateGraphics() = 0;
    virtual void CleanUp() = 0;

private:
    class Window& window;
    class Graphics& graphics;

};

#endif