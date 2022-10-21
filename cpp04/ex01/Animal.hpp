/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:13:36 by youssama          #+#    #+#             */
/*   Updated: 2022/10/20 01:59:08 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal & obj);
    Animal & operator = (const Animal & obj);
    virtual ~Animal();
    virtual void makeSound() const;
    std::string getType() const;
};

class Dog : public Animal
{
private:
    Brain *myBrain;
public:
    Dog();
    Dog(const Dog & obj);
    Dog & operator = (const Dog & obj);
    ~Dog();
    void SetType();
    void makeSound() const;
};

class Cat : public Animal
{
private:
    Brain *myBrain;
public:
    Cat();
    Cat(const Cat & obj);
    Cat & operator = (const Cat & obj);
    ~Cat();
    void SetType();
    void makeSound() const;
};

#endif