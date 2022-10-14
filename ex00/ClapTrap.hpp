#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string Name;
    int HitPoints;
    int Energy;
    int AttDam;
public:
    ClapTrap(std::string Name);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void ShowHea();
    ~ClapTrap();
};

#endif