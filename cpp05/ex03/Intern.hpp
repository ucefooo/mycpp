/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:16:48 by youssama          #+#    #+#             */
/*   Updated: 2022/10/24 00:00:06 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Form;
class PresidentialPardonForm;
class ShrubberyCreationForm;
class RobotomyRequestForm;

class Intern
{
public:
    Intern();
    Intern(const Intern &obj);
    Intern & operator = (const Intern & obj);
    ~Intern();
    Form * makeForm(std::string FormToDo, std::string FormName);
};

#endif