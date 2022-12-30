/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 01:28:32 by youssama          #+#    #+#             */
/*   Updated: 2022/10/30 22:55:05 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void inc(int *c)
{
    (*c)++;
}

void aff(int *t,int size)
{
    int i=-1;
    while(++i<size)
        std::cout << t[i] << " ";
    std::cout << std::endl;
}
int main()
{
    //std::string k = "0123456789";
    int t[10] = {0,1,2,3,4,5,6,7,8,9};
    //char * t = (char *)k.c_str();
    aff(t,10);
    //int *c =NULL;
    //std::cout << k<<std::endl;
    iter(t,10,inc);
    //std::cout << t<<std::endl;
    aff(t,10);
}