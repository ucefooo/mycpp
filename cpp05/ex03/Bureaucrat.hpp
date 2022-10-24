/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:35:44 by youssama          #+#    #+#             */
/*   Updated: 2022/10/23 23:13:35 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

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
    void signForm(Form *obj) const;
    void executeForm(Form const & form);
};

std::ostream & operator << (std::ostream & output,const Bureaucrat &obj);

#endif