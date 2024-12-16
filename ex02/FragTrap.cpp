#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "default constructor of a Fragtrap called" << std::endl;
	Hp = 100;
	Ep = 100;
	Ap = 30;
}

FragTrap::~FragTrap(){
    std::cout << "default destructor of Fragtrap called" << std::endl;
}

FragTrap::FragTrap(std::string nm) : ClapTrap(nm) {
	std::cout << "other FRAG constructor called for " << nm << std::endl;
	name = nm;
	Hp = 100;
	Ep = 100;
	Ap = 30;
}

FragTrap::FragTrap(FragTrap const &uno) : ClapTrap(uno) {
    std::cout << "copy frag constructor called" << std::endl;
    *this = uno;
}

FragTrap &FragTrap::operator=(FragTrap const &cp){
	std::cout << "overloader operator frag called" << std::endl;
	name = cp.name;
	Hp = cp.Hp;
	Ep = cp.Hp;
	Ap = cp.Ap;
	return *this;
}

void	FragTrap::attack(const std::string& target){
	if (Hp == 0 || Ep == 0){
		std::cout << "cant do anything frag has no more hp or ep" << std::endl;
		return;
	}
	std::cout << name << " frag attack " << target << ", causing " << Ap <<
		 " point of damage" << std::endl;
	Ep = Ep - 1;
}

void    FragTrap::highFivesGuys(){
    std::string answer;

    while (1){
        std::cout << "do u want a highfive ?" << std::endl;
        getline(std::cin, answer);
        if (answer == "yes"){
            std::cout << "yesss 'clap'" << std::endl;
            return;
        }
        if (answer == "no"){
            std::cout << "not nice" << std::endl;
            return;
        }
    }
}