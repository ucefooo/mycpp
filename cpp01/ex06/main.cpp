/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:57:35 by youssama          #+#    #+#             */
/*   Updated: 2022/10/12 00:14:48 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int c, char **v)
{
    if (c <= 1 || c > 2)
        return ((std::cout << "Please enter a valid message" << std::endl) || 1);
    Harl po;
    po.complain(v[1]);
}