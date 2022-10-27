/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:24:30 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 23:14:17 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
private:
    const std::string myTarget;
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm & obj);
    ShrubberyCreationForm & operator = (const ShrubberyCreationForm & obj);
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const & executor) const;
    class CantExecute : public std::exception
    {
    public:
        CantExecute();
        virtual char const * what() const throw();
    };
};

#endif