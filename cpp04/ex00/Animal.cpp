/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:24:59 by youssama          #+#    #+#             */
/*   Updated: 2022/10/20 01:35:10 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Constructor of Animal" << std::endl;
}

Animal::Animal(const Animal & obj)
{
    std::cout << "Copy Constructor of Animal" << std::endl;
    this->type = obj.type;
}

Animal & Animal::operator = (const Animal & obj)
{
    std::cout << "Copy assignement opeartor of Animal" << std::endl;
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

Cat::Cat()
{
    std::cout << "Constructor of Cat" << std::endl;
    this->SetType();
}

Cat::Cat(const Cat & obj)
{
    std::cout << "Copy Constructor of Cat" << std::endl;
    this->type = obj.type;
}

Cat & Cat::operator = (const Cat & obj)
{
    std::cout << "Copy assignement opeartor of Cat" << std::endl;
    this->type = obj.type;
    return (*this);
}

void Cat::SetType()
{
    this->type = "Cat";
}

void Cat::makeSound() const 
{
    std::cout << "Meaw meaw :Cats dont bark!!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor of Cat" << std::endl;
}