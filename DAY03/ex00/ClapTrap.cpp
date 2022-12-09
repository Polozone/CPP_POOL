
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << "Constructor called" << std::endl;
    _attackDamage = 10;
    _energyPoints = 10;
    _hitPoints = 10;
}

ClapTrap::~ClapTrap(){std::cout << "Destructor called" << std::endl;}

ClapTrap::ClapTrap(const ClapTrap & ref)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ref;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & ref)
{
    std::cout << "Copy operator called" << std::endl;
    this->_attackDamage = ref._attackDamage;
    this->_energyPoints = ref._energyPoints;
    this->_hitPoints = ref._hitPoints;
    this->_name = ref._name;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << _name << " attacks " << target << " causing " 
    << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    _hitPoints += amount;
    _energyPoints--;
}