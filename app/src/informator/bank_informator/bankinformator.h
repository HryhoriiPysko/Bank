#pragma once

#include "informator/IInformator.h"

class BankInformator : public IInformator
{
public:
    void inform(InformType type) const override;

private:
    void errorInputInform() const;
    void errorWithdrawInform() const;
    void successWithdrawInform() const;
    void welcomeInform() const;
};
