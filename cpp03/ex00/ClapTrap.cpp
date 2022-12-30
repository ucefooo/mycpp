/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:25:18 by youssama          #+#    #+#             */
/*   Updated: 2022/10/25 00:25:19 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "Default Constructor called" << std::endl;
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
        Energy--;
    }
    else
        std::cout << "Cant attack" << std::endl;
}

void ClapTrap::ShowHea() const
{
    std::cout << "Hitpoint = "<<HitPoints<<" Energy = "<<Energy<<" Attd = "<<AttDam<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << Name << " Takes " << amount << " point damage!" << std::endl;
    if (HitPoints - (int)amount < 0)
        HitPoints = 0;
    else
        HitPoints -= (int)amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy > 0 && HitPoints > 0)
    {
        std::cout << "ClapTrap " << Name << " is healing " << amount << " Hit points" << std::endl;
        HitPoints += amount;
        Energy--;
    }
    else
        std::cout << "Cant repair no health or energy points left" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::GetName() const
{
    return (this->Name);
}

int ClapTrap::GetHitPoints() const
{
    return  (this->HitPoints);
}

int ClapTrap::GetEnergy() const
{
    return (this->Energy);
}

int ClapTrap::GetAttDam() const
{
    return (this->AttDam);
}

ClapTrap::ClapTrap(const ClapTrap & obj)
{
    std::cout << "Default copy Constructor called" << std::endl;
    this->Name = obj.Name;
    this->HitPoints = obj.HitPoints;
    this->Energy = obj.Energy;
    this->AttDam = obj.AttDam;
}

ClapTrap & ClapTrap::operator = (const ClapTrap & obj)
{
    std::cout << "Copy assignement called" << std::endl;
    this->Name = obj.GetName();
    this->HitPoints = obj.GetHitPoints();
    this->Energy = obj.GetEnergy();
    this->AttDam = obj.GetAttDam();
    return (*this);
}