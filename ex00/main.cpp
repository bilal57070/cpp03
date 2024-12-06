#include "ClapTrap.hpp"

int	main(){
    ClapTrap p("yasuo");
    ClapTrap y("yone");
    p.attack("yone");
    y.takeDamage(15);
    y.beRepaired(10);
}