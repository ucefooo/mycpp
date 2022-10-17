/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:30:43 by youssama          #+#    #+#             */
/*   Updated: 2022/10/05 22:45:44 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string w)
{
    type = w;
}

Weapon::Weapon()
{
    type = "\0";
}

void Weapon::setType(const std::string &ty)
{
    type = ty;
}

const std::string& Weapon::getType()
{
    return (type);
}

void Weapon::aff()
{
    std::cout<<type<<std::endl;
}