#include "ScavTrap.hpp"

int main(){
	ScavTrap n("leh");
	ScavTrap s("lej");

	n.attack("lej");
	s.takeDamage(20);
	s.guardGate();
}