/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:36:00 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 23:19:45 by youssama         ###   ########.fr       */
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
        c.beSigned(obj);
        obj.executeForm(c);
        d.beSigned(obj);
        obj.executeForm(d);
        b.beSigned(obj);
        obj.executeForm(b);
    }
    catch (std::exception &b)
    {
        std::cout << b.what() << std::endl;
    }
}