#ifndef Claptrap
#define Claptrap

#include <string>
#include <iostream>

class ClapTrap{
	private:
		std::string name;
		int Hp;
		int Ep;
		int Ap;

	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(ClapTrap const &clp);
		ClapTrap& operator=(ClapTrap const &cl);
		ClapTrap(std::string nm);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};




#endif