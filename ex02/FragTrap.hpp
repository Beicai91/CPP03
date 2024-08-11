#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    //this private member variable is added for a better understanding of inheritance
    private:
        bool    _didHighFive;

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &other);
        FragTrap    &operator=(const FragTrap &other);
        ~FragTrap();
        void    highFivesGuys(void);
};

#endif