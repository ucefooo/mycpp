/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:31:58 by youssama          #+#    #+#             */
/*   Updated: 2022/10/05 18:52:39 by youssama         ###   ########.fr       */
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