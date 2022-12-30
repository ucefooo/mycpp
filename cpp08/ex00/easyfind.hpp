/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 23:21:54 by youssama          #+#    #+#             */
/*   Updated: 2022/11/01 01:25:15 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
int easyfind(T vec,int N)
{
    typename T::iterator i = std::find(vec.begin(),vec.end(),N);
    if (i == vec.end())
        throw std::out_of_range("Throw::Didnt find it");
    return N;
}

#endif