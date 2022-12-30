/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 00:53:52 by youssama          #+#    #+#             */
/*   Updated: 2022/11/01 01:25:23 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(10);
    v.push_back(10);
    v.push_back(20);
    v.push_back(13);
    std::cout << easyfind(v,-9) << " is here."<< std::endl;}
    catch(std::exception &e)
    {
        std::cout << e.what()<<std::endl;
    }
}