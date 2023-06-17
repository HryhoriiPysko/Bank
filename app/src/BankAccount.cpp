#include "BankAccount.h"

BankAccount::BankAccount(double funds) : _fund{ funds }
{
}

double BankAccount::balance() const
{
    return _fund;
}

void BankAccount::withdrawFunds(double amount)
{
    _fund -= amount;
}
