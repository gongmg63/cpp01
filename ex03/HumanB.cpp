#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::HumanB(std::string name, Weapon *weapon) 
{
	this->name = name;
	this->weapon = weapon;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (this->weapon == NULL)
		std::cout << this->name << " has no weapon" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	
}
