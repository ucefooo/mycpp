/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:18:54 by youssama          #+#    #+#             */
/*   Updated: 2022/10/16 02:08:21 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0) , y(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float X,const float Y) : x(X) , y(Y)
{
    std::cout << "float constructor called" << std::endl;
}

Point::Point(const Point & myPoi) : x(myPoi.x),y(myPoi.y)
{
    std::cout << "Copy constructor called" << std::endl;
}

Point & Point::operator = (const Point & myPoi)
{
    std::cout << "Copy assignment operator called" << std::endl;
    (void)myPoi;
    return (*this);
}

Point::~Point()
{
    std::cout << "Destructor called" << std::endl;
}

void Point::aff()
{
    std::cout << "x is = "<<x<<"  y is = "<<y<<std::endl;
}

float Point::GiveCorX() const
{
    return (x.toFloat());
}

float Point::GiveCorY() const
{
    return (y.toFloat());
}