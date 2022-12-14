
#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap michel("Michel");
    ClapTrap didier(michel);
	int i = 0;
	while (i < 13)
	{
    	michel.attack("Didier");
		i++;
	}
	std::cout << std::endl;
    return 0;
}