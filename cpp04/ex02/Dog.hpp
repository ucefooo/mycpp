/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 03:59:20 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 04:02:30 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Brain.hpp"
#include "Animal.hpp"

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

#endif