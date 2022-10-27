/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:36:00 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 21:07:51 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat obj("hi", 0);
        Bureaucrat o("joo", 12);
        std::cout << "we are here" << o.getName() << o.getGrade() << std::endl;
        std::cout << o << std::endl;
        std::cout << obj << std::endl;
        //Bureaucrat obj2("hi", 0);
    }
    catch (std::exception &b)
    {
        std::cout << b.what();
    }
}