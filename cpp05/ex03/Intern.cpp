/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:22:12 by youssama          #+#    #+#             */
/*   Updated: 2022/10/24 00:09:23 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Default constructor for Intern" <<  std::endl;
}

Intern::Intern(const Intern &obj)
{
    std::cout << "Default copy constructor for Intern" <<  std::endl;
    (void)obj;
}

Intern & Intern::operator = (const Intern & obj)
{
    std::cout << "Copy assignement for Intern" <<  std::endl;
    (void)obj;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Default destructor for Intern" <<  std::endl;
}

Form * Intern::makeForm(std::string FormToDo, std::string FormNameTarget)
{
    std::string Names[3] = {"robot","shrubbery","president"};
    int i = 0;
    Form *tmp = NULL;
    while (i < 3)
    {
        if (FormToDo.find(Names[i]) < FormToDo.length())
            break;
        i++;
    }
    switch (i)
    {
        case 0:
            tmp = new RobotomyRequestForm(FormNameTarget);
            return (tmp);
        case 1:
            tmp = new ShrubberyCreationForm(FormNameTarget);
            return (tmp);
        case 2:
            tmp = new PresidentialPardonForm(FormNameTarget);
            return (tmp);
        default:
            std::cout << "Please define a correct form use the words: robot, shrubberry,president." << std::endl;
            return (0);
    }
}