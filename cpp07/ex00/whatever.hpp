/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 00:12:48 by youssama          #+#    #+#             */
/*   Updated: 2022/10/28 01:26:31 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T & a, T & b)
{
    T c = a;
    a = b;
    b = c;
}

template<typename T>
T min(T a, T b)
{
    if (a < b)
        return (a);
    return (b);
}

template<typename T>
T max(T a, T b)
{
    if (a > b)
        return (a);
    return (b);
}

#endif