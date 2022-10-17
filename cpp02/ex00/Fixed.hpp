/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:02:01 by youssama          #+#    #+#             */
/*   Updated: 2022/10/12 22:50:19 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int FixedPoint;
    const static int FracBits = 8;
public:
    Fixed(const Fixed & myFix);
    Fixed & operator= (const Fixed & myFix);
    Fixed();
    int getRawBits( void ) const;
    void setRawBits(int const raw);
    ~Fixed();
};


#endif