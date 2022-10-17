/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:18:02 by youssama          #+#    #+#             */
/*   Updated: 2022/10/17 01:18:40 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    ClapTrap ko("apah");
    ko.ShowHea();
    FragTrap po("khtak");
    po.ShowHea();
    po.takeDamage(30);
    po.ShowHea();
    po.attack("ferda");
    po.ShowHea();
    po.highFivesGuys();
}