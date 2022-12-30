/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:56:58 by youssama          #+#    #+#             */
/*   Updated: 2022/10/22 03:30:08 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int FixedPoint;
    const static int FracBits = 8;
public:
    Fixed(const int Num);
    Fixed(const float Num);
    Fixed(const Fixed & myFix);
    Fixed & operator= (const Fixed & myFix);
    bool operator > (const Fixed & myFix) const;
    bool operator < (const Fixed & myFix) const;
    bool operator <= (const Fixed & myFix) const;
    bool operator >= (const Fixed & myFix) const;
    bool operator == (const Fixed & myFix) const;
    bool operator != (const Fixed & myFix) const;
    Fixed operator + (const Fixed & myFix) const ;
    Fixed operator - (const Fixed & myFix) const ;
    Fixed operator * (const Fixed & myFix) const ;
    Fixed operator / (const Fixed & myFix) const ;
    Fixed & operator ++ ();
    Fixed operator ++ (int);
    Fixed operator -- (int);
    Fixed & operator -- ();
    Fixed();
    int getRawBits( void ) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
    static Fixed & min(Fixed & Fir, Fixed & Sec);
    static const Fixed & min(const Fixed & Fir, const Fixed & Sec);
    static Fixed & max(Fixed & Fir,Fixed & Sec);
    static const Fixed & max(const Fixed & Fir, const Fixed & Sec);
    ~Fixed();
};

std::ostream &operator << (std::ostream &out, const Fixed & myFix);

#endif