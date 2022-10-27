/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:42:56 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 23:12:51 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
private:
    const std::string myTarget;
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm & obj);
    RobotomyRequestForm & operator = (const RobotomyRequestForm & obj);
    ~RobotomyRequestForm();
    void execute(Bureaucrat const & executor) const;
    class CantExecute : public std::exception
    {
    public:
        CantExecute();
        virtual char const * what() const throw();
    };
};


#endif