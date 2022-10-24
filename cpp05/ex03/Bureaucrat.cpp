/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:03:09 by youssama          #+#    #+#             */
/*   Updated: 2022/10/23 23:04:25 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name,int grade) : myName(name)
{
    std::cout << "Default constructor for Bureaucrat" << std::endl;
    if (grade < 1)
        throw std::out_of_range("Bureaucrat::GradeTooHighException");
    else if (grade > 150)
        throw (std::out_of_range ("Bureaucrat::GradeTooLowException"));
    else
        myGrade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : myName(obj.myName),myGrade(obj.myGrade)
{
    std::cout << "Default copy contstructor for Bureaucrat" << std::endl;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat & obj)
{
    std::cout << "Copy assignement operator for Bureaucrat" << std::endl;
    if (this != &obj)
        this->myGrade = obj.myGrade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default destructor for Bureaucrat" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return (this->myName);
}

int Bureaucrat::getGrade() const
{
    return (this->myGrade);
}

std::ostream & operator << (std::ostream & output,const Bureaucrat &obj)
{
    output << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (output);
}


void Bureaucrat::IncrementGrade()
{
    if (this->myGrade <= 1)
        throw std::out_of_range("Bureaucrat::GradeTooHighException");
    this->myGrade--;
}

void Bureaucrat::DecrementGrade()
{
    if (this->myGrade >= 150)
        throw std::out_of_range("Bureaucrat::GradeTooLowException");
    this->myGrade++;
}

void Bureaucrat::signForm(Form *obj) const
{
    if (obj == NULL)
        throw std::out_of_range("CantsignForm");
    if (obj->SignGetter())
        std::cout << *this << " signed " << *obj << std::endl;
    else
        std::cout << *this << " couldn`t sign " << *obj << " because Grade not high enough" << std::endl;
}

void Bureaucrat::executeForm(Form const & form)
{
    try
    {
        form.execute(*this);
        std::cout << *this << " executed " << form.NameGetter() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}