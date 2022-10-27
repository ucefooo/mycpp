/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 01:51:37 by youssama          #+#    #+#             */
/*   Updated: 2022/10/26 23:57:30 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor for Brain" << std::endl;
}

Brain::Brain(const Brain & obj)
{
    std::cout << "Default copy constructor for Brain" << std::endl;
    std::copy(obj.ideas,obj.ideas + 100,this->ideas);
}

Brain & Brain::operator = (const Brain & obj)
{
    std::cout << "Operator assignement for Brain" << std::endl;
    if (this != &obj)
        std::copy(obj.ideas,obj.ideas + 100,this->ideas);
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Default deconstructor for Brain" << std::endl;
}