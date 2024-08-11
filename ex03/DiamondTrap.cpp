#include "DiamondTrap.hpp"

//constructors and destructor
DiamondTrap::DiamondTrap(): ClapTrap("default_clap_name"), ScavTrap(), FragTrap(), _name("default_DiamondTrap")
{
    this->_hitP = FragTrap::_hitP;
    this->_energyP = ScavTrap::_energyP;
    this->_attackD = FragTrap::_attackD;
    std::cout << "A default DiamondTrap (inherited from ScavTrap and FragTrap) is created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
    this->_hitP = FragTrap::_hitP;
    this->_energyP = ScavTrap::_energyP;
    this->_attackD = FragTrap::_attackD;
    std::cout << "A DiamondTrap " << this->_name << " (inherited from ScavTrap and FragTrap) is created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name)
{
     std::cout << "A DiamondTrap is created by copying another DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->_name << " (inherited from ScavTrap and FragTrap) is destroyed!" << std::endl;
}

//operators
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    ClapTrap::operator=(other);
    ScavTrap::operator=(other);
    FragTrap::operator=(other);
    this->_name = other._name;
    return (*this);
}

//public member funcs
void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap named" << this->_name << " . I'm originated from ClapTrap named " << ClapTrap::_name << std::endl;
}