#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap    frag("Frag");
    ScavTrap    scav("Scav");

    frag.takeDamage(90);
    frag.takeDamage(20);
    frag.beRepaired(50);
    frag.attack("Dodo");
    scav.beRepaired(50);
    scav.attack("John");
    return (0);
}