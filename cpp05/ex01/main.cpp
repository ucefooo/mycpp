/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:36:00 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 23:01:45 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat obj("hi", 2);
        Bureaucrat o("joo", 12);
        Form c("you",2,2);
        c.beSigned(obj);
        std::cout << obj << std::endl;
        obj.IncrementGrade();
        c.beSigned(obj);
        std::cout << obj << std::endl;
        obj.IncrementGrade();
        obj.DecrementGrade();
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