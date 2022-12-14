
#ifndef CLAPTRAP_hpp
# define CLAPTRAP_hpp

#include <string>
#include <iostream>

class ClapTrap {

public:

    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap & ref);
    ~ClapTrap(void);

    ClapTrap & operator=(const ClapTrap & ref);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

private:

    std::string _name;
    int         _attackDamage;
    int         _energyPoints;
    int         _hitPoints;

};

#endif