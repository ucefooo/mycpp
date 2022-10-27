/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 03:53:34 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 04:02:18 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

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