/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:14:38 by youssama          #+#    #+#             */
/*   Updated: 2022/10/20 21:43:43 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
Animal *Arr[100];
std::string *s=new std::string[5000];
int i = 0;
s[0] = "\0";
while(i < 1)
{
    std::cout <<"-------------\n";
    Arr[i] = new Dog();
    std::cout <<"-------------\n";
    i++;
}
while(i<2)
{
    std::cout <<"-------------\n";
    Arr[i] = new Cat();
    std::cout <<"-------------\n";
    i++;
}
i = 0;
while(i < 2)
{
    std::cout <<"-------------\n";
    Arr[i]->~Animal();
    std::cout <<"-------------\n";
    i++;
}

return 0;
}