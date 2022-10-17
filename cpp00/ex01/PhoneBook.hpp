/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:16:47 by youssama          #+#    #+#             */
/*   Updated: 2022/10/03 20:16:55 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>

class Contact
{
private:
    std::string FirstName;
    std::string LastName;
    std::string Nickname;
    std::string PhoneNumber;
    std::string DarkestSecret;
public:
    void AffCont();
    int TestCont(std::string Test);
    void InitContact();
    void AffSearch(int i);
    Contact();
};


class PhoneBook
{
public:
    int NumOfCont;
    int LastAdd;
    Contact Cont[8];
    void Add(Contact Con);
    void Aff(int i);
    void Search();
    PhoneBook();
};

int TestLen(std::string s);
void HelpAff(std::string s);
void af(PhoneBook d);


#endif