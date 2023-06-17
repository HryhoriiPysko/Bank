#pragma once

enum class InformType;

class IInformator
{
public:
    virtual void inform(InformType type) const = 0;
};
