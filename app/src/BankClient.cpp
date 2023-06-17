#include "BankClient.h"

#include<cctype>

BankClient::BankClient() : _account{1000}
{
}

void BankClient::logic()
{	
	while (_menu.action() != Menu::MenuAction::Exit)
	{
		_menu.draw();
		_menu.chooseAction();
		system("cls");

		handleLogic(_menu.action());

	}
}

void BankClient::welcome()
{
	std::cout << "\t\t\t\t Welcome to the bank account!!!" << std::endl;
}

void BankClient::handleLogic(Menu::MenuAction action)
{
	switch (action)
	{
	case Menu::MenuAction::ShowBalance:
		std::cout << "On your account: " << _account.balance() << std::endl;
		break;
	case Menu::MenuAction::Widhdraw:
		_account.withdrawFunds(amountOfMoney());

		std::cout << "On your account: " << _account.balance() << std::endl;

		break;
	case Menu::MenuAction::TopUp:

		_account.mobileTopUp(amountOfMoney());
		std::cout << "On your account: " << _account.balance() << std::endl;
		break;
	case Menu::MenuAction::Exit:

		std::cout << "\t\t\t\t Thank you for using our bank !!!" << std::endl;

		break;

	default:

		std::cout << "Please enter a number" << std::endl;

		break;
	}
}

double BankClient::amountOfMoney()
{
	double amount{0.};
	std::cout << "Enter amount: ";
	std::cin >> amount;
	return amount;
}
