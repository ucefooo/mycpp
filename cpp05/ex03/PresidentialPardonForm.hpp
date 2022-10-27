/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:57:21 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 23:32:03 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
private:
    const std::string myTarget;
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm & obj);
    PresidentialPardonForm & operator = (const PresidentialPardonForm & obj);
    ~PresidentialPardonForm();
    void execute(Bureaucrat const & executor) const;
    class CantExecute : public std::exception
    {
    public:
        CantExecute();
        virtual char const * what() const throw();
    };
};


#endif