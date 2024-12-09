#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>
#include <iostream>

class ClapTrap{
	protected:
		std::string name;
		int Hp;
		int Ep;
		int Ap;

	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string nm);
		ClapTrap(ClapTrap const &clp);
		ClapTrap& operator=(ClapTrap const &cl);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};




#endif