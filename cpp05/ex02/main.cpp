/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:36:00 by youssama          #+#    #+#             */
/*   Updated: 2022/10/23 23:16:04 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat obj("myBureau", 1);
        Bureaucrat o("joo", 12);
        ShrubberyCreationForm c("Shru class");
        RobotomyRequestForm b("Robot class");
        PresidentialPardonForm d("Pres pardon");
        d.beSigned(obj);
        b.beSigned(obj);
        c.beSigned(obj);
        obj.executeForm(c);
        obj.executeForm(d);
        obj.executeForm(b);
    }
    catch (std::exception &b)
    {
        std::cout << b.what() << std::endl;
    }
}