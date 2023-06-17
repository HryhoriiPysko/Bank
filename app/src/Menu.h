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

	void draw();
	void chooseAction();

	MenuAction action() const;

private:
	MenuAction _action{ MenuAction::None };
};

