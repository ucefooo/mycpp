/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:14:30 by youssama          #+#    #+#             */
/*   Updated: 2022/10/05 18:06:08 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << name <<": Destructed"<<std::endl;
}

void Zombie::Setter(std::string nm)
{
    name = nm;
}

void Zombie::announce()
{
    std::cout << name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}