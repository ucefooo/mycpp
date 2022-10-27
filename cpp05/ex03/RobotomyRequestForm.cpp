/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:42:14 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 23:33:38 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::CantExecute::CantExecute()
{
}

const char* RobotomyRequestForm::CantExecute::what() const throw()
{
    return "RobotomyRequestForm::Robotomy Failed";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target,72,45),myTarget(target)
{
    std::cout << "Default constructor for RobotMyRequest Form" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & obj) : Form(obj.myTarget,72,45),myTarget(obj.myTarget)
{
    std::cout << "Default copy constructor for RobotMyRequest Form" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm & obj)
{
    std::cout << "assignement operator for RobotMyRequest Form" << std::endl;
    (void)obj;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Default destructor for RobotMyRequest Form" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->SignGetter() && executor.getGrade() <= 45)
        std::cout << this->NameGetter() << " has been robotomized successfully 50\% of the time." << std::endl;
    else
        throw CantExecute();
}