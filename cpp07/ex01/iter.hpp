/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 01:27:56 by youssama          #+#    #+#             */
/*   Updated: 2022/10/28 01:54:55 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *address, int size, void (*fu)(T*))
{
    if (address == NULL)
        return ;
    int i = -1;
    while (++i < size)
        fu(&address[i]);
}

#endif