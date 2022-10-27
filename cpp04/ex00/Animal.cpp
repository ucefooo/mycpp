/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:24:59 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 03:50:55 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Constructor of Animal" << std::endl;
    this->type = "All";
}

Animal::Animal(const Animal & obj)
{
    std::cout << "Copy Constructor of Animal" << std::endl;
    this->type = obj.type;
}

Animal & Animal::operator = (const Animal & obj)
{
    std::cout << "Copy assignement opeartor of Animal" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const 
{
    std::cout << "Animal random voice" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor of Animal" << std::endl;
}