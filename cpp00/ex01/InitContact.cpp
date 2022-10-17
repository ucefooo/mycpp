/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InitContact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:12:29 by youssama          #+#    #+#             */
/*   Updated: 2022/10/03 20:59:05 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int Contact::TestCont(std::string Test)
{
    if (Test == "\0")
            return (1);
    return (0);
}

void Contact::AffCont()
{
    std::cout <<"first name: "<<FirstName<<std::endl;
    std::cout <<"last name: "<<LastName<<std::endl;
    std::cout <<"nickname: "<<Nickname<<std::endl;
    std::cout <<"Phone number: "<<PhoneNumber<<std::endl;
    std::cout <<"darkest secr: "<<DarkestSecret<<std::endl;
}

void Contact::InitContact()
{
    while (TestCont(FirstName))
    {
        std::cout <<"enter your first name: ";
        getline(std::cin,FirstName);
        if (std::cin.eof() || std::cin.fail())
        {
            std::clearerr(stdin);
            std::cin.clear();
            std::cout << std::endl;
        }
    }
    while (TestCont(LastName))
    {
        std::cout <<"enter your last name: ";
        getline(std::cin,LastName,'\n');
        if (std::cin.eof() || std::cin.fail())
        {
            std::clearerr(stdin);
            std::cin.clear();
            std::cout << std::endl;
        }
    }
    while(TestCont(Nickname))
    {
        std::cout <<"enter your Nickname: ";
        getline(std::cin,Nickname,'\n');
        if (std::cin.eof() || std::cin.fail())
        {
            std::clearerr(stdin);
            std::cin.clear();
            std::cout << std::endl;
        }
    }
    while (TestCont(PhoneNumber))
    {
        std::cout <<"enter your Phone Number: ";
        getline(std::cin,PhoneNumber,'\n');
        if (std::cin.eof() || std::cin.fail())
        {
            std::clearerr(stdin);
            std::cin.clear();
            std::cout << std::endl;
        }
    }
    while (TestCont(DarkestSecret))
    {
        std::cout <<"enter your Darkest Secret: ";
        getline(std::cin,DarkestSecret,'\n');
        if (std::cin.eof() || std::cin.fail())
        {
            std::clearerr(stdin);
            std::cin.clear();
            std::cout << std::endl;
        }
    }
}

Contact::Contact()
{
    FirstName[0] = '\0';
    LastName[0] = '\0';
    Nickname[0] = '\0';
    PhoneNumber[0] = '\0';
    DarkestSecret[0] = '\0';
}

void Contact::AffSearch(int i)
{
    std::cout<<i<<"         |";
    HelpAff(FirstName);
    std::cout<<"|";
    HelpAff(LastName);
    std::cout<<"|";
    HelpAff(Nickname);
    std::cout<<"|";
    std::cout<<std::endl;
}
