/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:57:10 by youssama          #+#    #+#             */
/*   Updated: 2022/10/30 03:13:54 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
    std::cout << "Destructor for Base" << std::endl;
}

Base * generate(void)
{
    srand(time(0));
    int i = rand() % 3;
    switch (i){
        case 0:
            std::cout << "Generated A" << std::endl;
            return (reinterpret_cast <Base *>(new A));
        case 1:
            std::cout << "Generated B" << std::endl;
            return (reinterpret_cast <Base *>(new B));
        case 2:
            std::cout << "Generated C" << std::endl;
            return (reinterpret_cast <Base *>(new C));
    }
    return (0);
}

void identify(Base* p)
{
    std::cout << "identify called by pointer\n";
    if (p == NULL)
    {
        std::cout << "P is null\n";
        return;
    }
    if (dynamic_cast<A*> (p))
        std::cout << "A\n";
    else if (dynamic_cast<B*> (p))
        std::cout<<"B\n";
    else if (dynamic_cast<C*> (p))
        std::cout << "C\n";
    else
        std::cout << "Casting error"<<std::endl;
    return ;
}

void identify(Base& p)
{
    std::cout << "identify called by refrence\n";
    try {
        A tmp = dynamic_cast<A&> (p);
        std::cout << "A\n";
    }
    catch (std::exception &e)
    {
        try{
            B tmp = dynamic_cast<B&> (p);
            std::cout << "B\n";
        }
        catch (std::exception &e)
        {
            try{
                C tmp = dynamic_cast<C&> (p);
                std::cout << "C\n";
            }
            catch (std::exception &e){
                std::cout << "Casting error"<<std::endl;
            }
        }
    }
    return ;
}