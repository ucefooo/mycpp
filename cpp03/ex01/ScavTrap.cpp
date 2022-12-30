/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:01:40 by youssama          #+#    #+#             */
/*   Updated: 2022/10/25 00:20:28 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

ScavTrap::ScavTrap(const ScavTrap & obj) : ClapTrap(obj.Name)
{
    std::cout << "Default copy constructor from ScavTrap" << std::endl;
}

ScavTrap & ScavTrap::operator = (const ScavTrap & obj)
{
    std::cout << "Copy assignement called from ScavTrap" << std::endl;
    this->Name = obj.GetName();
    this->HitPoints = obj.GetHitPoints();
    this->Energy = obj.GetEnergy();
    this->AttDam = obj.GetAttDam();
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (Energy > 0 && HitPoints > 0)
    {
        std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttDam << " points of damage!" << std::endl;
        Energy--;
    }
    else
        std::cout << "Cant attack" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "ScavTrap " << Name << " Takes " << amount << " point damage!" << std::endl;
    if (HitPoints - (int)amount < 0)
        HitPoints = 0;
    else
        HitPoints -= (int)amount;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (Energy > 0 && HitPoints > 0)
    {
        std::cout << "ScavTrap " << Name << " is healing " << amount << " Hit points" << std::endl;
        HitPoints += amount;
        Energy--;
    }
    else
        std::cout << "Cant repair no health or energy points left" << std::endl;
}