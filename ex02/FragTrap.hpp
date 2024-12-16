#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		~FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &uno);
		FragTrap& operator=(FragTrap const &cp);
		void attack(const std::string& target);
        void highFivesGuys(void);
};


#endif