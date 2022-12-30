/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:25:56 by youssama          #+#    #+#             */
/*   Updated: 2022/10/25 00:25:57 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap ko("apah");
    ko.ShowHea();
    ScavTrap po("khtak");
    po.ShowHea();
    po.takeDamage(30);
    po.ShowHea();
    po.attack("ferda");
    po.ShowHea();
    po.guardGate();
}