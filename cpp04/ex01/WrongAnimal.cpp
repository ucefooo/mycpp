/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 03:30:46 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 04:08:20 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Constructor of WrongAnimal" << std::endl;
    this->type = "All";
}

WrongAnimal::WrongAnimal(const WrongAnimal & obj)
{
    std::cout << "Copy Constructor of WrongAnimal" << std::endl;
    this->type = obj.type;
}

WrongAnimal & WrongAnimal::operator = (const WrongAnimal & obj)
{
    std::cout << "Copy assignement opeartor of WrongAnimal" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const 
{
    std::cout << "WrongAnimal random voice" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor of WrongAnimal" << std::endl;
}