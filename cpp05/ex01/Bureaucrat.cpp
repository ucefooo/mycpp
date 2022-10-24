/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:03:09 by youssama          #+#    #+#             */
/*   Updated: 2022/10/22 22:00:09 by youssama         ###   ########.fr       */
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
    std::cout << "Default copy contstructor" << std::endl;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat & obj)
{
    std::cout << "Copy assignement operator" << std::endl;
    if (this != &obj)
        this->myGrade = obj.myGrade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default destructor" << std::endl;
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

void Bureaucrat::signForm(Form obj) const
{
    if (obj.SignGetter())
        std::cout << *this << " signed " << obj << std::endl;
    else
        std::cout << *this << " couldn`t sign " << obj << " because Grade not high enough";
}