/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:16:10 by youssama          #+#    #+#             */
/*   Updated: 2022/10/03 20:16:52 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int TestLen(std::string s)
{
    if (s.length() > 10)
        return (1);
    return (0);
}

void HelpAff(std::string s)
{
    int i=0;
    if (TestLen(s))
    {
        while (i < 9)
                std::cout << (char)s[i++];
            std::cout<<".";
    }
    else
    {
        std::cout << s;
        i = s.length();
        while (i++ < 10)
            std::cout << " ";
    }
}

void af(PhoneBook d)
{
    int i=0;
    while (i < 8)
    {
        std::cout << "---------" <<std::endl;
        std::cout << i << std::endl;
        d.Cont[i].AffCont();
        std::cout << "---------" <<std::endl;
        i++;
    }
    return;
}