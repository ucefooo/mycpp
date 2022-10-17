/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InitBook.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:13:33 by youssama          #+#    #+#             */
/*   Updated: 2022/10/03 20:15:41 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::Search()
{
    int i = 0;
    while (i < NumOfCont)
    {
        Cont[i].AffSearch(i);
        i++;
    }
}

void PhoneBook::Aff(int i)
{
    Cont[i].AffCont();
}

void PhoneBook::Add(Contact Con)
{
    if (NumOfCont < 8)
        NumOfCont++;
    if (LastAdd < 8)
        Cont[LastAdd++] = Con;
    else 
    {
        LastAdd = 0;
        Cont[LastAdd++] = Con;
    }
}

PhoneBook::PhoneBook()
{
    LastAdd = 0;
    NumOfCont = 0;
}
