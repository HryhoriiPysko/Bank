#include "bankinformator.h"

#include "informator/InformType.h"

#include <iostream>

void BankInformator::inform(InformType type) const
{
    switch (type)
    {
    case InformType::Welcome:
        welcomeInform();
        break;
    case InformType::ErrorInput:
        errorInputInform();
        break;
    case InformType::ErrorWithdraw:
        errorWithdrawInform();
        break;
    case InformType::SuccessWithdraw:
        successWithdrawInform();
        break;
    default:
        break;
    }
}

void BankInformator::errorInputInform() const
{
    std::cout << "Execution error: enter a amount dreater than zero!" << std::endl;
}

void BankInformator::errorWithdrawInform() const
{
    std::cout << "Your account does not have enough funds " << std::endl;
}

void BankInformator::successWithdrawInform() const
{
    std::cout << std::endl << "The operation was successful!" << std::endl;
}

void BankInformator::welcomeInform() const
{
    std::cout << "\t\t\t\t Welcome to the bank account!!!" << std::endl;
}
