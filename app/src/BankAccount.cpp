#include "BankAccount.h"

BankAccount::BankAccount(double funds) : _fund{funds} {}

double BankAccount::balance() { return _fund; }

double BankAccount::withdrawFunds(double amount) {
  if (amount <= 0) {
    std::cout << "Execution error: enter a amount dreater than zero!"
              << std::endl;
  } else if (balance() <= amount) {
    std::cout << "Your account does not have enough funds " << std::endl;
  } else {
    _fund -= amount;
    std::cout << std::endl << "The operation was successful!" << std::endl;

    std::cout << std::endl;
    return _fund;
  }
}

double BankAccount::mobileTopUp(double amount) {
  if (amount <= 0) {
    std::cout << "Execution error: enter a amount dreater than zero!"
              << std::endl;
  } else if (balance() <= amount) {
    std::cout << "Your account does not have enough funds " << std::endl;
  } else {
    _fund -= amount;
    std::cout << std::endl << "The operation was successful!" << std::endl;

    std::cout << std::endl;
    return _fund;
  }
}
