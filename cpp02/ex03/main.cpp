/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:57:34 by youssama          #+#    #+#             */
/*   Updated: 2022/10/16 02:09:35 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point fir(4,3);
    Point sec(10,1);
    Point th(2,2);
    Point p(4,3);
    if (bsp(fir,sec,th,p))
        std::cout << "yes"<<std::endl;
    else
        std::cout << "no"<<std::endl;
    //th.aff();
    return 0;
}