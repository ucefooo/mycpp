/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 00:19:44 by youssama          #+#    #+#             */
/*   Updated: 2022/10/30 23:11:45 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 750

void push(int *c)
{
    int i=0;
    while(i++<5)
        c[i-1]=i;
}
void aff(int *c,int size)
{
    int i = 0;
    while (i < size)
    {
        std::cout << c[i] << " ";
        i++;
    }
    std::cout <<std::endl;
}
int main()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
/*-------------------My main------------------------*/
    // try{
    // Array<int> cla;
    // Array<int> clapa(5);
    // const Array<int> t(5);
    // push(t.myElement);
    // aff(t.myElement,t.mySize);
    // clapa = t;
    // aff(clapa.myElement,clapa.mySize);
    // cla = t;
    // aff(cla.myElement,cla.mySize);
    // Array<int> c(cla);
    // std::cout << t.size() << std::endl;
    // // aff(c.myElement,c.mySize);
    // std::cout << c[1] << std::endl;
    // std::cout << c[-1] << std::endl;
    // // std::cout << c[6] << std::endl;
    // }
    // catch(std::out_of_range &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    
/*-------------------------------------------------*/
    // Array<std::string> cla;
    // Array<std::string> clapa(5);
    // Array<std::string> t(5);
    // std::string s = "akram";
    // t.myElement[0] = s;
    // t.myElement[1] = s+"hi";
    // std::cout << t.myElement[0] << std::endl;
    // std::cout << t.myElement[1] << std::endl;
    // clapa = t;
    // std::cout << clapa.myElement[0] << std::endl;
    // std::cout << clapa.myElement[1] << std::endl;
    // cla = clapa;
    // std::cout << clapa.myElement[0] << std::endl;
    // std::cout << clapa.myElement[1] << std::endl;
}
