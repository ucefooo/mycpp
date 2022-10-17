/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:44:55 by youssama          #+#    #+#             */
/*   Updated: 2022/10/16 02:05:16 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float CalcSur(float x,float y,float x2,float y2,int x3,int y3)
{
    float tmp = 0.5*(((x-x2)*(y-y3))-((x-x3)*(y-y2)));
    if (tmp < 0)
        return -tmp;
    return tmp;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float tmp = CalcSur(a.GiveCorX(),a.GiveCorY(),b.GiveCorX(),b.GiveCorY(),c.GiveCorX(),c.GiveCorY());
    float tmp1 = CalcSur(a.GiveCorX(),a.GiveCorY(),b.GiveCorX(),b.GiveCorY(),point.GiveCorX(),point.GiveCorY());
    float tmp2 = CalcSur(a.GiveCorX(),a.GiveCorY(),c.GiveCorX(),c.GiveCorY(),point.GiveCorX(),point.GiveCorY());
    float tmp3 = CalcSur(b.GiveCorX(),b.GiveCorY(),c.GiveCorX(),c.GiveCorY(),point.GiveCorX(),point.GiveCorY());
    if (tmp == tmp1+tmp2+tmp3)
        return (true);
    return (false);
}