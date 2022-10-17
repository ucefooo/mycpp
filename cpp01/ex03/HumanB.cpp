/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:28:35 by youssama          #+#    #+#             */
/*   Updated: 2022/10/17 01:26:10 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    if (weap != NULL)
        std::cout << name << " attacks with their " << weap->getType() << std::endl;
    else
        std::cout << name << " attacks with their " << std::endl;
}

HumanB::HumanB()
{
    name = "\0";
    this->weap = NULL;
}

HumanB::HumanB(std::string nam)
{
    name = nam;
    this->weap = NULL;
}

void HumanB::setWeapon(Weapon &cl)
{
    weap = &cl;
}