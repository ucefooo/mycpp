/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:16:39 by youssama          #+#    #+#             */
/*   Updated: 2022/10/05 18:05:55 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *tmp=newZombie("dghf");
    tmp->announce();
    delete tmp;
    randomChump("Fgfhfjg");
    return (0);
}