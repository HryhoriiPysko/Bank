#include "Menu.h"

#include <iostream>

void Menu::draw()
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
	int value;
	std::cin >> value;
	_action = MenuAction(value);
}

Menu::MenuAction Menu::action() const
{
	return _action;
}
