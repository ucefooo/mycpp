/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:18:02 by youssama          #+#    #+#             */
/*   Updated: 2022/10/25 00:21:00 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    ClapTrap ko("apah");
    ko.ShowHea();
    FragTrap po("khtak");
    po.ShowHea();
    po.takeDamage(1006);
    po.ShowHea();
    po.attack("ferda");
    po.ShowHea();
    po.highFivesGuys();
}