/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 03:07:13 by youssama          #+#    #+#             */
/*   Updated: 2022/11/02 00:28:50 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
public:
    MutantStack();
    MutantStack(MutantStack const & obj);
    ~MutantStack();
    MutantStack & operator=(const MutantStack &obj);
    
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin();
    iterator end();
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & obj) : std::stack<T>(obj)
{
}

template <typename T>
MutantStack<T>::~MutantStack(){
    this->c.clear();
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack<T> &obj)
{
    if (this != &obj)
        this->c=obj.c;
    return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}

#endif