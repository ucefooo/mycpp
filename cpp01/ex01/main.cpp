/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:36:21 by youssama          #+#    #+#             */
/*   Updated: 2022/10/05 18:53:31 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *tmp = zombieHorde(5,"stdrytHI");
    int i = 0;
    while(i<5)
    {
        tmp[i++].announce();
    }
    delete []tmp;
}