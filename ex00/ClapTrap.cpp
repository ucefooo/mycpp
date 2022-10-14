#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "Constructor called" << std::endl;
    this->Name = Name;
    this->HitPoints = 10;
    this->Energy = 10;
    this->AttDam = 0;
}

void ClapTrap::attack(const std::string& target)
{
    if (Energy > 0 && HitPoints > 0)
    {
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttDam << " points of damage!" << std::endl;
        HitPoints--;
        Energy--;
    }
}

void ClapTrap::ShowHea()
{
    std::cout << "Hitpoint = "<<HitPoints<<" Energy = "<<Energy<<" Attd = "<<AttDam<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << Name << " Takes " << amount << " point damage!" << std::endl;
    HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy > 0 && HitPoints > 0)
    {
        std::cout << "ClapTrap " << Name << " is healing " << amount << " Hit points" << std::endl;
        HitPoints += amount;
        Energy--;
    }
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}
