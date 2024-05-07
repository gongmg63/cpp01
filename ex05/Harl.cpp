#include "Harl.hpp"

Harl::Harl(void)
{
	this->level_map["DEBUG"] = 0;
	this->level_map["INFO"] = 1;
	this->level_map["WARNING"] = 2;
	this->level_map["ERROR"] = 3;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*harl[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	if (level_map.find(level) == level_map.end())
	{
		std::cout << "Level Error" << std::endl;
		return ;
	}
	(this->*harl[level_map[level]])();
}
