/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:36:00 by youssama          #+#    #+#             */
/*   Updated: 2022/10/23 23:12:22 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat obj("hi", 1);
        Bureaucrat o("joo", 12);
        Form c("you",150,150);
        c.beSigned(obj);
        obj.IncrementGrade();
        obj.IncrementGrade();
        std::cout << obj << std::endl;
        obj.DecrementGrade();
        std::cout << obj << std::endl;
        // std::cout << "we are here" << o.getName() << o.getGrade() << std::endl;
        // std::cout << o << std::endl;
        // std::cout << obj << std::endl;
        //Bureaucrat obj2("hi", 0);
    }
    catch (std::exception &b)
    {
        std::cout << b.what();
    }
}