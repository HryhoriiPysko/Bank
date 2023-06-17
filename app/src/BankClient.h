#pragma once

#include "BankAccount.h"
#include "Menu.h"

#include <iostream>

class BankClient {
public:
  BankClient();

  void logic();
  void welcome();

private:
  void handleLogic(Menu::MenuAction action);

  double amountOfMoney();

  Menu _menu;
  BankAccount _account;
};
