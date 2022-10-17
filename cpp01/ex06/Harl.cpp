/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:56:33 by youssama          #+#    #+#             */
/*   Updated: 2022/10/12 00:17:59 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int Check(std::string level)
{
    if (level == "DEBUG")
        return (0);
    if (level == "INFO")
        return (1);
    if (level == "WARNING")
        return (2);
    if (level == "ERROR")
        return (3);
    return (4);
}

void SomethingElse()
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    return ;
}

void Harl::complain(std::string level)
{
    int c = Check(level);
    switch (c)
    {
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
            break;
        default:
            SomethingElse();
    }
    return;
}

void Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-"
        "triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
    std::cout << std::endl;
    return;
}

void Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money.\n"
        "You didn't put enough bacon in my burger! If you did, I wouldn't"
        " be asking for more!" << std::endl;
    std::cout << std::endl;
}

void Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\n"
    "I've been coming for years whereas you started working here since"
    " last month." << std::endl;
    std::cout << std::endl;
}

void Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}