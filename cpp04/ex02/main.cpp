/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:14:38 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 04:11:44 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
Animal *Arr[100];
int i = 0;
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
    std::cout <<"my type " << Arr[i]->getType() << std::endl;
    Arr[i]->~Animal();
    std::cout <<"-------------\n";
    i++;
}

return 0;
}