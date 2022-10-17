/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:24:04 by youssama          #+#    #+#             */
/*   Updated: 2022/10/11 22:39:02 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
    std::string l[4] = {"DEBUG","INFO","WARNING","ERROR"};
    void (Harl::*ptr[4])() = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    int i = 0;
    while (i < 4)
    {
        if (l[i] == level)
            (this->*(ptr[i]))();
        i++;
    }
    return;
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-"
        "triple-pickle-special-ketchup burger. I really do!" << std::endl;
    return;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money."
        " You didn't put enough bacon in my burger! If you did, I wouldn't"
        " be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. "
    "I've been coming for years whereas you started working here since"
    " last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}