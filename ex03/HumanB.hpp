#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	HumanB	(std::string name);
	HumanB	(std::string name, Weapon *weapon);
	void	setWeapon(Weapon &weapon);
	void	attack(void);
};

#endif