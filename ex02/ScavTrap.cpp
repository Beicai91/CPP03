#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

//constructors and destructor
ScavTrap::ScavTrap(): ClapTrap(), _isGuardingGate(false)
{
    this->_hitP = 100;
    this->_energyP = 50;
    this->_attackD = 20;
    std::cout << "A default ScavTrap (inherited from ClapTrap) is created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), _isGuardingGate(false)
{
    this->_hitP = 100;
    this->_energyP = 50;
    this->_attackD = 20;
    std::cout << "ScavTrap " << name << " (inherited from ClapTrap) is created!" << std::endl; 
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other), _isGuardingGate(other._isGuardingGate)
{
    std::cout << "A ScavTrap is created by copying another ScavTrap!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " (inherited from ClapTrap) is destroyed!" << std::endl;
}

//operators
ScavTrap    &ScavTrap::operator=(const ScavTrap &other)
{
    if (this == &other)
        return (*this);
    ClapTrap::operator=(other);
    this->_isGuardingGate = other._isGuardingGate;
    return (*this);
}

//public member funcs
void    ScavTrap::attack(const std::string &target)
{
    if (this->_energyP > 0 && this->_hitP > 0)
    {
        std::cout << "ScavTrap " << this->_name << " (inherited from ClapTrap)" << " attacks " << target << " causing " << this->_attackD << " points of damage!" << std::endl;
        this->_energyP--;

    }
    else
        std::cout << "ScavTrap "<< this->_name << " (inherited from ClapTrap)" << " ran out of energy points or hit points! Impossible to attack!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " (inherited from ClapTrap) is now in gate keeper mode!" << std::endl;
    this->_isGuardingGate = true; 
}

