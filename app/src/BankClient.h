#pragma once

#include "BankAccount.h"
#include "Menu.h"

#include <memory>

class IInformator;

class BankClient
{
public:
    BankClient();

    void logic();
    void welcome();

private:
    void processLogic(Menu::MenuAction action);

    void mobileTopUp(double amount);
    void withdrawFunds(double amount);

    void balanceInform() const;

    double amountOfMoney() const;

    Menu _menu;
    BankAccount _account;
    std::shared_ptr<IInformator> _informator;
};
