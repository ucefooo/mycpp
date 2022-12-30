/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 03:09:53 by youssama          #+#    #+#             */
/*   Updated: 2022/10/30 03:03:13 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    Data t;
    uintptr_t ptr;
    t.age = 10;
    t.name = "hi";
    ptr = serialize(&t);
    Data *g = deserialize(ptr);
    if (g)
        std::cout << g->age << " and " << g->name << std::endl;
}