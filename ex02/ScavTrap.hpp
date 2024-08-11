#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    //this private variable is added for a better understanding of inheritance
    private:
        bool    _isGuardingGate;

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &other);
        ScavTrap    &operator=(const ScavTrap &other);
        ~ScavTrap();
        void    attack(const std::string &target);
        void    guardGate();
};

#endif