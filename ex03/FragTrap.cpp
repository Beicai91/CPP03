#include "FragTrap.hpp"

//constructors and destructor
FragTrap::FragTrap(): ClapTrap(), _didHighFive(false)
{
    this->_hitP = 100;
    this->_energyP = 100;
    this->_attackD = 30;
    std::cout << "A default FragTrap named " << this->_name << " (inherited from ClapTrap) is created!" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name), _didHighFive(false)
{
    this->_hitP = 100;
    this->_energyP = 100;
    this->_attackD = 30;
    std::cout << "FragTrap " << name << " (inherited from ClapTrap) is created!" << std::endl; 
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other), _didHighFive(other._didHighFive)
{
    std::cout << "A FragTrap is created by copying another FragTrap!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " (inherited from ClapTrap) is destroyed!" << std::endl; 
}

//operators
FragTrap    &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    ClapTrap::operator=(other);
    this->_didHighFive = other._didHighFive;
    return (*this);
}

//public member funcs
void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " (inherited from ClapTrap) request a high fives!" << std::endl;
    this->_didHighFive = true;
}