/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:25:23 by youssama          #+#    #+#             */
/*   Updated: 2022/10/25 00:25:26 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string Name;
    int HitPoints;
    int Energy;
    int AttDam;
public:
    ClapTrap(std::string Name);
    ClapTrap(const ClapTrap & obj);
    ClapTrap & operator = (const ClapTrap & obj);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void ShowHea() const;
    std::string GetName() const;
    int GetHitPoints() const;
    int GetEnergy() const;
    int GetAttDam() const;
    ~ClapTrap();
};

#endif