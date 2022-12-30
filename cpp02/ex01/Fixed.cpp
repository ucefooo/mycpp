/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:57:26 by youssama          #+#    #+#             */
/*   Updated: 2022/10/23 01:28:20 by youssama         ###   ########.fr       */
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

Fixed & Fixed::operator = (const Fixed & myFix)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &myFix)
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

Fixed::Fixed (const int Num)
{
    std::cout << "Int constructor called" << std::endl;
    this->FixedPoint = Num << FracBits;
}

int Fixed::toInt(void) const
{
    return (FixedPoint >> FracBits);
}

Fixed::Fixed(const float Num)
{
    std::cout << "Float constructor called" << std::endl;
    this->FixedPoint = roundf(Num * (1 << FracBits));
}

float Fixed::toFloat( void ) const
{
    return ((float)FixedPoint / (1 << FracBits));
}

std::ostream & operator << (std::ostream &out, const Fixed & myFix)
{
    out << myFix.toFloat();
    return (out);
}