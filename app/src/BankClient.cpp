#include "BankClient.h"

#include "informator/InformType.h"
#include "informator/bank_informator/bankinformator.h"

#include <cctype>
#include <iostream>

BankClient::BankClient() : _account{ 1000 }, _informator{ std::make_shared<BankInformator>() }
{
}

void BankClient::logic()
{
    while (_menu.action() != Menu::MenuAction::Exit)
    {
        _menu.draw();
        _menu.chooseAction();
        system("cls");

        processLogic(_menu.action());
    }
}

void BankClient::welcome()
{
    _informator->inform(InformType::Welcome);
}

void BankClient::processLogic(Menu::MenuAction action)
{
    switch (action)
    {
    case Menu::MenuAction::ShowBalance:
        std::cout << "On your account: " << _account.balance() << std::endl;
        break;
    case Menu::MenuAction::Widhdraw:
        withdrawFunds(amountOfMoney());
        break;
    case Menu::MenuAction::TopUp:
        mobileTopUp(amountOfMoney());
        break;
    case Menu::MenuAction::Exit:
        std::cout << "\t\t\t\t Thank you for using our bank !!!" << std::endl;
        break;
    case Menu::MenuAction::None:
        break;
    }
}

void BankClient::mobileTopUp(double amount)
{
    if (amount <= 0)
    {
        _informator->inform(InformType::ErrorInput);
        return;
    }
    if (_account.balance() < amount)
    {
        _informator->inform(InformType::ErrorWithdraw);
        return;
    }

    _account.withdrawFunds(amount);
    _informator->inform(InformType::SuccessWithdraw);

    balanceInform();
}

void BankClient::withdrawFunds(double amount)
{
    if (amount <= 0)
    {
        _informator->inform(InformType::ErrorInput);
        return;
    }
    if (_account.balance() < amount)
    {
        _informator->inform(InformType::ErrorWithdraw);
        return;
    }

    _account.withdrawFunds(amount);
    _informator->inform(InformType::SuccessWithdraw);

    balanceInform();
}

void BankClient::balanceInform() const
{
    std::cout << "On your account: " << _account.balance() << std::endl;
}

double BankClient::amountOfMoney() const
{
    double amount{ 0. };
    std::cout << "Enter amount: ";
    std::cin >> amount;
    return amount;
}
