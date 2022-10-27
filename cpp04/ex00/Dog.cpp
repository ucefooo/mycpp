/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 03:50:36 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 03:50:50 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Constructor of Dog" << std::endl;
    this->SetType();
}

Dog::Dog(const Dog & obj)
{
    std::cout << "Copy Constructor of Dog" << std::endl;
    this->type = obj.type;
}

Dog & Dog::operator = (const Dog & obj)
{
    std::cout << "Copy assignement opeartor of Dog" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

void Dog::SetType()
{
    this->type = "Dog";
}

void Dog::makeSound() const 
{
    std::cout << "Bark Bark Bark!!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor of Dog" << std::endl;
}