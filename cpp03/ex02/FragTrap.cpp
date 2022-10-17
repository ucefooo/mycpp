/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:17:46 by youssama          #+#    #+#             */
/*   Updated: 2022/10/17 01:20:29 by youssama         ###   ########.fr       */
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