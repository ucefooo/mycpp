/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 03:33:46 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 03:35:58 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Constructor of WrongCat" << std::endl;
    this->SetType();
}

WrongCat::WrongCat(const WrongCat & obj)
{
    std::cout << "Copy Constructor of WrongCat" << std::endl;
    this->type = obj.type;
}

WrongCat & WrongCat::operator = (const WrongCat & obj)
{
    std::cout << "Copy assignement opeartor of WrongCat" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

void WrongCat::SetType()
{
    this->type = "WrongCat";
}

void WrongCat::makeSound() const 
{
    std::cout << "Meaw meaw :WrongCats dont bark!!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor of WrongCat" << std::endl;
}