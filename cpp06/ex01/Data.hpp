/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 03:05:52 by youssama          #+#    #+#             */
/*   Updated: 2022/10/26 03:19:34 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <cstdint>

struct Data
{
    std::string name;
    int age;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif