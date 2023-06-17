#pragma once

#include<iostream>

class BankAccount
{
public:
	BankAccount(double funds);

	double balance();
	double withdrawFunds(double amount);
	double mobileTopUp(double amount);

private:
	double _fund;
};

