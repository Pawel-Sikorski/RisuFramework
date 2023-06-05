#include "game/Game.h"
#include "core/graphics/Graphics.h"
#include "core/graphics/Window.h"

Game::Game(Window& wnd, Graphics& gfx)
    : RisuProject(wnd, gfx)
{
}

Game::~Game()
{
}

void Game::Run()
{
    RisuProject::Run();
}