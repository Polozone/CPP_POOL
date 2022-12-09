
#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap michel("Michel");
    ClapTrap didier(michel);
    michel.attack("Didier");
    return 0;
}