#include "game/Game.h"
#include "core/graphics/Graphics.h"
#include "core/graphics/Window.h"

Game::Game(Window& wnd, Graphics& gfx)
    : RisuProject(wnd, gfx)
{
    Initialize();
}

Game::~Game()
{
    CleanUp();
}

void Game::Initialize()
{
    // Implementation specific to Game initialization
}

void Game::HandleInput()
{
    // Implementation specific to Game input handling
}

void Game::UpdateLogic()
{
    // Implementation specific to Game logic updating
}

void Game::UpdateGraphics()
{
    // Implementation specific to Game graphics updating
}

void Game::CleanUp()
{
    // Implementation specific to Game cleanup
}