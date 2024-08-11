#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    scavo("scavo");

    for (int i = 0; i < 50; ++i)
        scavo.attack("lynette");
    scavo.beRepaired(20);
    scavo.guardGate();
    return (0);
}