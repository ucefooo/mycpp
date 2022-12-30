/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:57:26 by youssama          #+#    #+#             */
/*   Updated: 2022/10/23 01:29:37 by youssama         ###   ########.fr       */
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

bool Fixed::operator > (const Fixed & myFix) const
{
    if (this->toFloat() > myFix.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator < (const Fixed & myFix) const
{
    if (this->toFloat() < myFix.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator <= (const Fixed & myFix) const
{
    if (this->toFloat() <= myFix.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator >= (const Fixed & myFix) const
{
    if (this->toFloat() >= myFix.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator == (const Fixed & myFix) const
{
    if (this->toFloat() == myFix.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator != (const Fixed & myFix) const
{
    if (this->toFloat() != myFix.toFloat())
        return (true);
    return (false);
}

Fixed Fixed::operator + (const Fixed & myFix) const
{
    Fixed tmp;
    tmp.FixedPoint = this->FixedPoint + myFix.FixedPoint;
    return (tmp);
}

Fixed Fixed::operator - (const Fixed & myFix) const
{
    Fixed tmp;
    tmp.FixedPoint = this->FixedPoint - myFix.FixedPoint;
    return (tmp);
}

Fixed Fixed::operator * (const Fixed & myFix) const
{
    float t;
    t = this->toFloat() * myFix.toFloat();
    Fixed tmp(t);
    return (tmp);
}

Fixed Fixed::operator / (const Fixed & myFix) const
{
    float t;
    t = this->toFloat() / myFix.toFloat();
    Fixed tmp(t);
    return (tmp);
}

Fixed & Fixed::operator ++ ()
{
    this->FixedPoint++;
    return (*this);
}

Fixed Fixed::operator ++ (int)
{
    Fixed tmp;
    tmp = *this;
    ++(this->FixedPoint);
    return (tmp);
}

Fixed & Fixed::operator -- ()
{
    this->FixedPoint--;
    return (*this);
}

Fixed Fixed::operator -- (int)
{
    Fixed tmp;
    tmp = *this;
    --(this->FixedPoint);
    return (tmp);
}

Fixed & Fixed::min(Fixed & Fir, Fixed & Sec)
{
    if (Fir <= Sec)
        return Fir;
    return (Sec);
}

const Fixed & Fixed::min(const Fixed & Fir, const Fixed & Sec)
{
    if (Fir <= Sec)
        return Fir;
    return (Sec);
}

Fixed & Fixed::max(Fixed & Fir, Fixed & Sec)
{
    if (Fir >= Sec)
        return Fir;
    return (Sec);
}

const Fixed & Fixed::max(const Fixed & Fir, const Fixed & Sec)
{
    if (Fir >= Sec)
        return Fir;
    return (Sec);
}