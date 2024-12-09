#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "default constructor of a Scavtrap called" << std::endl;
	Hp = 100;
	Ep = 50;
	Ap = 20;
}

ScavTrap::~ScavTrap(){
	std::cout << "default destructor of a Scavtrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string nm) : ClapTrap(nm) {
	std::cout << "other Scav constructor called" << std::endl;
	name = nm;
	Hp = 100;
	Ep = 50;
	Ap = 20;
}

ScavTrap::ScavTrap(ScavTrap const &uno) : ClapTrap(uno) {
	std::cout << "copie scav constructor called" << std::endl;
	*this = uno;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &cp){
	std::cout << "overloader operator scav called" << std::endl;
	name = cp.name;
	Hp = cp.Hp;
	Ep = cp.Hp;
	Ap = cp.Ap;
	return *this;
}

void	ScavTrap::attack(const std::string& target){
	if (Hp == 0 || Ep == 0){
		std::cout << "cant do anything Scav has no more hp or ep" << std::endl;
		return;
	}
	std::cout << name << " scav attack " << target << ", causing " << Ap <<
		 " point of damage" << std::endl;
	Ep = Ep - 1;
}

void	ScavTrap::guardGate(){
	if (Hp == 0 || Ep == 0){
		std::cout << "scav cant do anything no more hp or ep" << std::endl;
		return;
	}
	std::cout << name << " is in gate keeper mode" << std::endl;
}
