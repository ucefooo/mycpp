/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 05:07:55 by youssama          #+#    #+#             */
/*   Updated: 2022/10/23 20:44:36 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void Form::beSigned(const Bureaucrat obj)
{
    if (obj.getGrade() > this->gradeToSign)
    {
        
        obj.signForm(this);
        throw std::out_of_range("Form::GradeTooLowException");
    }
    isItSigned = true;
    obj.signForm(this);
}

Form::Form(std::string name,int sign,int exec) : myName(name),gradeToSign(sign),gradeToExec(exec)
{
    std::cout << "Default constructor of Form" << std::endl;
    if (gradeToExec < 1 || gradeToSign < 1)
        throw std::out_of_range("Form::GradeTooHighException");
    else if (gradeToExec > 150 || gradeToSign > 150)
        throw std::out_of_range("Form::GradeTooLowException");
    this->isItSigned = 0;
}
Form::Form(const Form & obj) : myName(obj.myName),gradeToSign(obj.gradeToSign),gradeToExec(obj.gradeToExec)
{
    std::cout << "copy constructor of Form" << std::endl;
    this->isItSigned = obj.isItSigned;
}

Form & Form::operator = (const Form & obj)
{
    std::cout << "copy assignement of Form" << std::endl;
    if (this != &obj)
    {
        this->isItSigned = obj.isItSigned;
    }
    return (*this);
}

Form::~Form()
{
    std::cout << "Default destructor of Form" << std::endl;
}


std::string Form::NameGetter() const
{
    return (this->myName);
}

bool Form::SignGetter() const
{
    return (this->isItSigned);
}

int Form::gradeSignGetter() const
{
    return (this->gradeToSign);
}

int Form::gradeExexGetter() const
{
    return (this->gradeToExec);
}

std::ostream & operator << (std::ostream &output, Form &obj)
{
    output << "My name is: " << obj.NameGetter() << ". Am i signed: "
        << obj.SignGetter()<< ". Grade to sign: "<< obj.gradeSignGetter()
        << ". Grade to execute "<< obj.gradeExexGetter();
    return (output);
}
