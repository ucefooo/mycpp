/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:57:10 by youssama          #+#    #+#             */
/*   Updated: 2022/10/26 23:21:02 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
    std::cout << "Destructor for Base" << std::endl;
}

Base * generate(void)
{
    return (reinterpret_cast <Base *>(new A));
}

void identify(Base* p)
{
    std::cout << "identify called by pointer\n";
    if (p == NULL)
    {
        std::cout << "P is null\n";
        return;
    }
    A *aTmp = dynamic_cast<A*> (p);
    B *bTmp = dynamic_cast<B*> (p);
    C *cTmp = dynamic_cast<C*> (p);
    if (aTmp)
        std::cout << "A\n";
    else if (bTmp)
        std::cout<<"B\n";

    else if (cTmp)
        std::cout << "C\n";
    else
        std::cout << "Casting error"<<std::endl;
    return ;
}

void identify(Base& p)
{
    std::cout << "identify called by refrence\n";
    if (dynamic_cast<A*> (&p))
        std::cout << "A\n";
    else if (dynamic_cast<B*> (&p))
        std::cout<<"B\n";
    else if (dynamic_cast<C*> (&p))
        std::cout << "C\n";
    else
        std::cout << "Casting error"<<std::endl;
    return ;
}