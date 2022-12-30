/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 01:54:40 by youssama          #+#    #+#             */
/*   Updated: 2022/11/02 00:22:32 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
    maxSize = 0;
}

Span::Span(std::size_t size)
{
    maxSize = size;
}

Span::Span(const Span &obj)
{
    *this = obj;
}

Span & Span::operator = (const Span &obj)
{
    if (this == &obj)
        return *this;
    this->maxSize = obj.maxSize;
    this->myVec = obj.myVec;
    return (*this);
}

void Span::addNumber(int add)
{
    myVec.shrink_to_fit();
    if (myVec.size() >= maxSize)
        throw std::out_of_range("Span::max size");
    myVec.push_back(add);
    myVec.shrink_to_fit();
}

int Span::shortestSpan()
{
    myVec.shrink_to_fit();
    if (myVec.size() <= 1)
        throw std::out_of_range("Span::nothing to find");
    std::vector<int>::iterator start = myVec.begin();
    std::vector<int>::iterator end = myVec.begin() + 1;
    int tmp = std::abs(*end - *start);
    for(;start != myVec.end();start++,end++)
        if (tmp > std::abs(*end - *start))
            tmp = std::abs(*end - *start);
    return (tmp);
}

int Span::longestSpan()
{
    myVec.shrink_to_fit();
    if (myVec.size() <= 1)
        throw std::out_of_range("Span::nothing to find");
    int min = *(std::min_element(myVec.begin(),myVec.end()));
    int max = *(std::max_element(myVec.begin(),myVec.end()));
    return (max - min);
}

Span::~Span()
{
}
