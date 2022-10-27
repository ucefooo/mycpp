/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 03:53:03 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 03:58:19 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Constructor of Cat" << std::endl;
    this->SetType();
    this->myBrain = new Brain();
}

Cat::Cat(const Cat & obj)
{
    std::cout << "Copy Constructor of Cat" << std::endl;
    this->type = obj.type;
    this->myBrain = new Brain();
    this->myBrain = obj.myBrain;
}

Cat & Cat::operator = (const Cat & obj)
{
    std::cout << "Copy assignement opeartor of Cat" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
        this->~Cat();
        this->myBrain = new Brain();
        this->myBrain = obj.myBrain;
    }
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
    delete this->myBrain;
}