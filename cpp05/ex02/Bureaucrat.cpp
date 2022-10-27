/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:03:09 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 23:04:27 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Bureaucrat::GradeTooHighException";
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Bureaucrat::GradeTooLowException";
}

Bureaucrat::Bureaucrat(const std::string name,int grade) : myName(name)
{
    std::cout << "Default constructor for Bureaucrat" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
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
        throw GradeTooHighException();
    this->myGrade--;
}

void Bureaucrat::DecrementGrade()
{
    if (this->myGrade >= 150)
        throw GradeTooLowException();
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