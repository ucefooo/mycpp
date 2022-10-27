/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:35:44 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 21:09:41 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
    const std::string myName;
    int myGrade;
public:
    Bureaucrat(const std::string name,int grade);
    Bureaucrat(const Bureaucrat &obj);
    Bureaucrat & operator = (const Bureaucrat & obj);
    ~Bureaucrat();
    std::string getName() const;
    int getGrade() const;
    void IncrementGrade();
    void DecrementGrade();
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

std::ostream & operator << (std::ostream & output,const Bureaucrat &obj);

#endif