/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:57:34 by youssama          #+#    #+#             */
/*   Updated: 2022/10/15 22:21:35 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    Fixed a(156.55f);
    Fixed b( -511.60f );
    std::cout << Fixed::min( a, b ) << std::endl;
    //Fixed c( -12.4f );
    //Fixed v = c / b;
    // std::cout << a << std::endl;
    // std::cout << --a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a-- << std::endl;
    // std::cout << a << std::endl;
    //std::cout << b<<std::endl;
    // if (b > c)
    //     std::cout << "yes\n";
    // else
    //     std::cout << "no\n";
    // if (b < c)
    //     std::cout << "yes\n";
    // else
    //     std::cout << "no\n";
    // if (b >= c)
    //     std::cout << "yes\n";
    // else
    //     std::cout << "no\n";
    // if (b <= c)
    //     std::cout << "yes\n";
    // else
    //     std::cout << "no\n";
    // if (b == c)
    //     std::cout << "yes\n";
    // else
    //     std::cout << "no\n";
    // if (b != c)
    //     std::cout << "yes\n";
    // else
    //     std::cout << "no\n";
    // Fixed const d( b );
    // a = Fixed( 1234.4321f );
    // std::cout << "a is " << a << std::endl;
    // std::cout << "b is " << b << std::endl;
    // std::cout << "c is " << c << std::endl;
    // std::cout << "d is " << d << std::endl;
    // std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    // std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    // std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    // std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}