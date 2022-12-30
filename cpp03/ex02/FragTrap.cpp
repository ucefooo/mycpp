/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:17:46 by youssama          #+#    #+#             */
/*   Updated: 2022/10/25 00:20:46 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
    std::cout << "High Five" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor for FragTrap called" << std::endl;
    this->HitPoints = 100;
    this->Energy = 100;
    this->AttDam = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor for FragTrap called" << std::endl;
}

FragTrap::FragTrap(const FragTrap & obj) : ClapTrap(obj.Name)
{
    std::cout << "Default copy constructor from FragTrap" << std::endl;
}

FragTrap & FragTrap::operator = (const FragTrap & obj)
{
    std::cout << "Copy assignement called from FragTrap" << std::endl;
    this->Name = obj.GetName();
    this->HitPoints = obj.GetHitPoints();
    this->Energy = obj.GetEnergy();
    this->AttDam = obj.GetAttDam();
    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    if (Energy > 0 && HitPoints > 0)
    {
        std::cout << "FragTrap " << Name << " attacks " << target << ", causing " << AttDam << " points of damage!" << std::endl;
        Energy--;
    }
    else
        std::cout << "Cant attack" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "FragTrap " << Name << " Takes " << amount << " point damage!" << std::endl;
    if (HitPoints - (int)amount < 0)
        HitPoints = 0;
    else
        HitPoints -= (int)amount;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (Energy > 0 && HitPoints > 0)
    {
        std::cout << "FragTrap " << Name << " is healing " << amount << " Hit points" << std::endl;
        HitPoints += amount;
        Energy--;
    }
    else
        std::cout << "Cant repair no health or energy points left" << std::endl;
}