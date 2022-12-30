/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 02:14:09 by youssama          #+#    #+#             */
/*   Updated: 2022/10/30 23:02:52 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<class T>
class Array
{
public:
    T *myElement;
    int mySize;
    Array();
    Array(unsigned int N);
    Array(const Array & obj);
    Array<T> & operator = (const Array<T> & obj);
    T & operator[] (int) const;
    ~Array();
    int size() const;
};


template <class T> Array<T>::Array()
{
    std::cout << "Default constructor for Array" << std::endl;
    this->myElement = new T[1];
    this->mySize = 0;
}

template <class T> Array<T>::Array(unsigned int N)
{
    std::cout << "Default constructor with param for Array" << std::endl;
    this->myElement = new T[N];
    this->mySize = N;
}

template <class T> Array<T>::Array(const Array<T> & obj)
{
    std::cout << "Default copy constructor Array" << std::endl;
    int i = -1;
    this->mySize = obj.mySize;
    if (this->mySize != 0)
        this->myElement = new T[this->mySize];
    else
        this->myElement = new T[1];
    while (++i < this->mySize)
        this->myElement[i] = obj.myElement[i];
}

template <class T> Array<T> & Array<T>::operator = (const Array<T> & obj)
{
    std::cout << "copy assignment Array" << std::endl;
    int i = -1;
    if (this == &obj)
        return (*this);
    this->mySize = obj.mySize;
    this->~Array();
    if (this->mySize != 0)
        this->myElement = new T[this->mySize];
    else
        this->myElement = new T[1];
    while (++i < this->mySize)
        this->myElement[i] = obj.myElement[i];
    return (*this);
}

template <class T> Array<T>::~Array()
{
    std::cout << "Default deconstructor for Array" << std::endl;
    delete[] this->myElement;
}
template <class T> int Array<T>::size() const
{
    return (this->mySize);
}

template <class T> T& Array<T>::operator[] (int index) const
{
    if (index >= this->mySize || index < 0)
        throw std::out_of_range("Error::index of table out of range");
    return (this->myElement[index]);
}

#endif