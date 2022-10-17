/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:52:40 by youssama          #+#    #+#             */
/*   Updated: 2022/10/16 02:05:26 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point();
    Point(const float X,const float Y);
    Point(const Point & myPoi);
    Point & operator = (const Point & myPoi);
    void aff();
    float GiveCorX() const;
    float GiveCorY() const;
    ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif