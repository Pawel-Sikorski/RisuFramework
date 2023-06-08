#include "core/logic/RisuProject.h"
#include "core/graphics/Graphics.h"
#include "core/graphics/Window.h"

RisuProject::RisuProject(Window &wnd, Graphics &gfx)
    : window(wnd),
      graphics(gfx)
{
}

RisuProject::~RisuProject()
{
}

void RisuProject::Run()
{
    graphics.BeginFrame();
    HandleInput();
    UpdateLogic();
    UpdateGraphics();
    graphics.EndFrame();
}