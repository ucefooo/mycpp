/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 01:05:32 by youssama          #+#    #+#             */
/*   Updated: 2022/11/01 02:48:10 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
    std::size_t maxSize;
    std::vector<int> myVec;
public:
    Span();
    Span(std::size_t size);
    Span(const Span &obj);
    Span & operator = (const Span &obj);
    void addNumber(int add);
    template <typename T>
    void addNumber(T start, T end)
    {
        myVec.shrink_to_fit();
        if (myVec.size() + maxSize < (std::size_t)std::distance(start,end))
            throw std::out_of_range("Span::cant add max size");
        myVec.insert(myVec.begin(),start,end);
    }
    int shortestSpan();
    int longestSpan();
    ~Span();
};

#endif