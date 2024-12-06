#include <ClapTrap.hpp>

ClapTrap::ClapTrap(){
	std::cout << "default constructor called" << std::endl;
	Hp = 10;
	Ep = 10;
	Ap = 10;
}

ClapTrap::~ClapTrap(){
	std::cout << "default destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string nam){
	std::cout << "other constructor called for " << name << std::endl;
	name = nam;
	Hp = 10;
	Ep = 10;
	Ap = 15;
}

void	ClapTrap::attack(const std::string& target){
	if (Hp == 0 || Ep == 0){
		std::cout << "cant do anything no more hp or ep" << std::endl;
		return;
	}
	std::cout << name << " attacks " << target << ", causing " << Ap <<
		 " point of damage" << std::endl;
	Ep = Ep - 1;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (Hp == 0){
		std::cout << "already 0 hp cant take more dmg" << std::endl;
		return;
	}
	std::cout << name << " took " << amount << " damage" << std::endl;
	Hp = Hp - amount;
	if (Hp <= 0)
		std::cout << name << "died" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (Hp == 0){
		std::cout << "already 0 hp or ep cant do anything" << std::endl;
		return;
	}
	std::cout << name << " healed " << amount << " Hp" << std::endl;
	Hp = Hp + amount;
	Ep = Ep - 1;
}