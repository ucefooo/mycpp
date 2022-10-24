/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:35:44 by youssama          #+#    #+#             */
/*   Updated: 2022/10/22 21:59:46 by youssama         ###   ########.fr       */
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
};

std::ostream & operator << (std::ostream & output,const Bureaucrat &obj);

#endif