/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:57:13 by youssama          #+#    #+#             */
/*   Updated: 2022/10/12 00:10:59 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
private:
    void debug();
    void info();
    void warning();
    void error();
public:
    void complain(std::string level);
};

void SomethingElse();
int Check(std::string level);

#endif