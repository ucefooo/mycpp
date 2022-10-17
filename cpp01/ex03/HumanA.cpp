/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:21:31 by youssama          #+#    #+#             */
/*   Updated: 2022/10/17 01:32:26 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << name << " attacks with their " << wep.getType() << std::endl;
}

HumanA::HumanA(std::string nam,Weapon &w) : wep(w)
{
    name = nam;
}