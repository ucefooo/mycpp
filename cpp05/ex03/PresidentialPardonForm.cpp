/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:57:12 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 23:32:26 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::CantExecute::CantExecute()
{
}

const char* PresidentialPardonForm::CantExecute::what() const throw()
{
    return "PresidentialPardonForm::CANT EXECUTE";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target,25,5),myTarget(target)
{
    std::cout << "Default constructor for PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & obj) : Form(obj.myTarget,25,5),myTarget(obj.myTarget)
{
    std::cout << "Default copy constructor for PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm & obj)
{
    std::cout << "assignement operator for PresidentialPardonForm" << std::endl;
    (void)obj;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Default destructor for PresidentialPardonForm" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->SignGetter() && executor.getGrade() <= 5)
        std::cout << this->NameGetter() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    else
        throw CantExecute();
}