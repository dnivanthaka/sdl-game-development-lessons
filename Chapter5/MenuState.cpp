#include "MenuState.h"

const std::string MenuState::s_menuID = "MENU";

void MenuState::update()
{
    
}

void MenuState::render()
{

}

bool MenuState::onEnter()
{
    std::cout << "Entering MenuState\n";
    return true;
}

bool MenuState::onExit()
{
    std::cout << "Exiting MenuState\n";
    return true;
}
