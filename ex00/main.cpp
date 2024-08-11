#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    ct1("John");

    for (int i = 0; i < 10; ++i)
        ct1.attack("Mark");
    ct1.takeDamage(2);
    ct1.beRepaired(2);
    return (0);
}