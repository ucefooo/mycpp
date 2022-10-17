#include "ScavTrap.hpp"


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor called from ScavTrap" << std::endl;
    Name = name;
    HitPoints = 100;
    Energy = 50;
    AttDam = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called from ScavTrap" << std::endl;
}
