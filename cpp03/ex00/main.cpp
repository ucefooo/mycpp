/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:25:29 by youssama          #+#    #+#             */
/*   Updated: 2022/10/25 00:25:31 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap po("Yuos");
    po.ShowHea();
    po.attack("ferda");
    po.ShowHea();
    po.takeDamage(6);
    po.ShowHea();
    po.beRepaired(3);
    po.ShowHea();
}