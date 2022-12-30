/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:18:55 by youssama          #+#    #+#             */
/*   Updated: 2022/10/25 00:15:03 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string Name;
    int HitPoints;
    int Energy;
    int AttDam;
public:
    ClapTrap(std::string Name);
    ClapTrap(const ClapTrap & obj);
    ClapTrap & operator = (const ClapTrap & obj);
    virtual void attack(const std::string& target);
    virtual void takeDamage(unsigned int amount);
    virtual void beRepaired(unsigned int amount);
    void ShowHea() const;
    std::string GetName() const;
    int GetHitPoints() const;
    int GetEnergy() const;
    int GetAttDam() const;
    ~ClapTrap();
};

#endif