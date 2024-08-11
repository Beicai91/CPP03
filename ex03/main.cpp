#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap dt_default;
    std::cout << "\n" << std::endl;
    DiamondTrap dt1("Diamond");
    std::cout << "\n" << std::endl;
    DiamondTrap dt_copy(dt1);
    std::cout << "\n" << std::endl;
    DiamondTrap dt2("Jade");
    std::cout << "\n" << std::endl;
    DiamondTrap dt_assign;
    dt_assign = dt2;
    std::cout << "\n" << std::endl;

    std::cout << "Let's see what dt1 can do" << std::endl;
    std::cout << "1. ScavTrap's attack function" << std::endl;
    dt1.attack("Monster");
    std::cout << "2. ScavTrap's Guard Gate function?" << std::endl;
    dt1.guardGate();
    std::cout << "3. FragTrap's High Five function?" << std::endl;
    dt1.highFivesGuys();
    std::cout << "4. its own Who Am I function" << std::endl;
    dt1.whoAmI();
    return (0);
}