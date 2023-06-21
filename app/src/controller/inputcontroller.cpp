#include "inputcontroller.h"

#include <iostream>

int InputController::InputProcess()
{
    int _choice;
    std::cin >> _choice;
    while (true)
    {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            system("cls");
            std::cout << "Oops, that input is invalid. Please try again." << std::endl;
        }
        else
        {
            std::cin.ignore(32767, '\n');
            return _choice;
        }
    }
}
