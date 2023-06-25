#include "Menu.h"

#include "controller/inputcontroller.h"

#include <iostream>

#include "controller/inputcontroller.h"
void Menu::draw() const
{
    std::cout << std::endl;
    std::cout << "\t\t\t\t Select an option" << std::endl << std::endl;
    std::cout << "\t\t\t\t Enter 1. Show balance" << std::endl;
    std::cout << "\t\t\t\t Enter 2. widhdraw funds" << std::endl;
    std::cout << "\t\t\t\t Enter 3. mobile top-up" << std::endl << std::endl;
    std::cout << "\t\t\t\t Enter 4. exit" << std::endl << std::endl;
    std::cout << "\t\t\t\t please make a choice:  ";
}

void Menu::chooseAction()
{
    InputController inputChoice;
    _action = MenuAction(inputChoice.InputProcess());
}

Menu::MenuAction Menu::action() const
{
    return _action;
}
