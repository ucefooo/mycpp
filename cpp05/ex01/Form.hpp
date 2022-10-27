/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:19:07 by youssama          #+#    #+#             */
/*   Updated: 2022/10/22 21:03:33 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string myName;
    bool isItSigned;
    const int gradeToSign;
    const int gradeToExec;
public:
    Form(std::string name,int sign,int exec);
    Form(const Form & obj);
    Form & operator = (const Form & obj);
    ~Form();
    std::string NameGetter() const;
    bool SignGetter() const;
    int gradeSignGetter() const;
    int gradeExexGetter() const;
    void beSigned(const Bureaucrat obj);
    class GradeTooHighException : public std::exception
    {
    public:
        GradeTooHighException();
        virtual char const * what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        GradeTooLowException();
        virtual char const * what() const throw();
    };
};

std::ostream & operator << (std::ostream &output, Form &obj);

#endif