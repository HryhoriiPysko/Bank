#pragma once

#include <iostream>

class BankAccount
{
public:
    BankAccount(double funds);

    double balance() const;

    void withdrawFunds(double amount);

private:
    double _fund;
};
