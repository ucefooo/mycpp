/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:01:59 by youssama          #+#    #+#             */
/*   Updated: 2022/10/12 22:52:48 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


void Fixed::setRawBits(int const raw)
{
    this->FixedPoint = raw;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->FixedPoint);
}

Fixed::Fixed(const Fixed & myFix)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = myFix;
}

Fixed & Fixed::operator= (const Fixed & myFix)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->FixedPoint = myFix.getRawBits();
    return (*this);
}

Fixed::Fixed()
{
    std::cout << "Default constructor called"<< std::endl;
    FixedPoint = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
