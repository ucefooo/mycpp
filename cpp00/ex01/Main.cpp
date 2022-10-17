/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:00:00 by youssama          #+#    #+#             */
/*   Updated: 2022/10/03 20:58:22 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook book;
    std::string InCmd;
    std::string Choice;

    while (1)
    {
        Contact c1;
        std::cout << "Please enter Your choice |ADD, SEARCH, EXIT| --> ";
        std::getline(std::cin,InCmd);
        if (std::cin.eof() || std::cin.fail())
        {
            std::clearerr(stdin);
            std::cin.clear();
            std::cout << std::endl;
        }
        if (InCmd == "ADD")
        {
            c1.InitContact();
            book.Add(c1);
        }
        else if (InCmd == "SEARCH")
        {
            if (book.NumOfCont == 0)
            {
                std::cout << "No one in the phone book"<<std::endl;
                continue ;
            }
            book.Search();
            while ((int)Choice[0] < 48 || (int)Choice[0] >= book.NumOfCont+48 || (int)Choice[1])
            {
                std::cout << "Please enter Your choice to display --> ";
                getline(std::cin,Choice);
                if (std::cin.eof() || std::cin.fail())
                {
                    std::clearerr(stdin);
                    std::cin.clear();
                    std::cout << std::endl;
                }
                if ((int)Choice[0] < 48 || (int)Choice[0] >= book.NumOfCont+48 || (int)Choice[1])
                    std::cout << "Please enter a valid index" << std::endl;
            }
            book.Cont[(int)Choice[0] - 48].AffCont();
            Choice = -1;
        }
        else if (InCmd == "EXIT")
        {
            std::cout << "Good bye see you"<<std::endl;
            break;
        }
        else
            std::cout << "Please enter a valid Choice" << std::endl;
    }
    return(0);
}