/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:14:38 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 03:51:46 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
const WrongAnimal* meta = new WrongAnimal();
const WrongAnimal* i = new WrongCat();

std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
meta->makeSound();
std::cout << "----------------\n";
const Animal* Ameta = new Animal();
const Animal* Aj = new Dog();
const Animal* Ai = new Cat();
std::cout << Aj->getType() << " " << std::endl;
std::cout << Ai->getType() << " " << std::endl;
Ai->makeSound(); //will output the cat sound!
Aj->makeSound();
Ameta->makeSound();
return 0;
}