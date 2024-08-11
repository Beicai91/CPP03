#include "ClapTrap.hpp"

//constructor and destructor
ClapTrap::ClapTrap(): _name("Default"), _hitP(10), _energyP(10), _attackD(0)
{
    std::cout << "A default ClapTrap is created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitP(10), _energyP(10), _attackD(0)
{
    std::cout << "A ClapTrap named " << name << " is created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other): _name(other._name), _hitP(other._hitP), _energyP(other._energyP), _attackD(other._attackD)
{
    std::cout << "A ClapTrap is created by copying another ClapTrap!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " is destroyed!" << std::endl;
}

//operators
ClapTrap    &ClapTrap::operator=(const ClapTrap &other)
{
    if (this == &other)
        return (*this);
    this->_name = other._name;
    this->_hitP = other._hitP;
    this->_energyP = other._energyP;
    this->_attackD = other._attackD;
    return (*this);
}

//public member funcs
void    ClapTrap::attack(const std::string &target)
{
    if (this->_energyP > 0 && this->_hitP > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackD << " points of damage!" << std::endl;
        this->_energyP--;

    }
    else if (this->_energyP == 0)
        std::cout << "ClapTrap " << this->_name << " ran out of energy points! Impossible to attack!" << std::endl;
    else if (this->_hitP == 0)
        std::cout << "ClapTrap " << this->_name << " is dead! Impossible to attack. Game Over!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitP >= amount)
    {
        std::cout << "ClapTrap " << this->_name << " is attacked and lose " << amount << " hit points!" << std::endl;
        this->_hitP -= amount;
    }
    else
    {
        this->_hitP = 0;
        std::cout << "ClapTrap " << this->_name << " dies from a dead hit, Game Over!" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyP > 0 && this->_hitP > 0)
    {
        std::cout << "ClapTrap " << this->_name << " is repaired and gain " << amount << " hit points!" << std::endl;
        this->_energyP--;
        this->_hitP += amount;
    }
    else if (this->_energyP == 0)
        std::cout << "ClapTrap "<< this->_name << " ran out of energy points! Impossible to repair itself!" << std::endl;
    else if (this->_hitP == 0)
        std::cout << "ClapTrap " << this->_name << " is dead! Impossible to repair itself. Game Over" << std::endl;
}
