/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:56:58 by youssama          #+#    #+#             */
/*   Updated: 2022/10/14 01:24:20 by youssama         ###   ########.fr       */
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
    Fixed();
    int getRawBits( void ) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
    friend std::ostream &operator << (std::ostream &out, const Fixed & myFix);
    ~Fixed();
};


#endif