/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:36:00 by youssama          #+#    #+#             */
/*   Updated: 2022/10/24 01:15:18 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
          Bureaucrat b("yassir",137);
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("shrubbery", "Bender");
    if(!rrf)
        return 0;
    rrf->beSigned(b);
    rrf->execute(b);
    std::cout << *rrf << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}