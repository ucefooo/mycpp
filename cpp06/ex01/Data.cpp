/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 03:09:38 by youssama          #+#    #+#             */
/*   Updated: 2022/10/26 22:49:16 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t tmp;
    if (ptr == NULL)
    {
        std::cout << "Param error";
        return (0);
    }
    tmp = reinterpret_cast<uintptr_t> (ptr);
    return (tmp);
}

Data* deserialize(uintptr_t raw)
{
    Data *tmp;
    if (raw == (uintptr_t)NULL)
        return (0);
    tmp = reinterpret_cast<Data *>(raw);
    return (tmp);
}
