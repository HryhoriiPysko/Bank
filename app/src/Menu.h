#pragma once

class Menu
{
public:
    enum class MenuAction
    {
        None = 0,
        ShowBalance,
        Widhdraw,
        TopUp,
        Exit
    };

    void draw() const;
    void chooseAction();

    MenuAction action() const;

private:
    MenuAction _action{ MenuAction::None };
};
