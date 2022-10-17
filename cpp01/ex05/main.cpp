/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:09:30 by youssama          #+#    #+#             */
/*   Updated: 2022/10/11 22:37:59 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl po;
    po.complain("DEBUG");
    po.complain("INFO");
    po.complain("WARNING");
    po.complain("ERROR");
    po.complain("xcvb");
}