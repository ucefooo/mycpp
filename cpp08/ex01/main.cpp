/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 01:50:09 by youssama          #+#    #+#             */
/*   Updated: 2022/11/01 03:04:51 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
try{
Span sp(100);
std::vector<int> v;
for(int i=0;i < 100;i++)
    v.push_back(i);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(87);
sp.addNumber(9);
sp.addNumber(1);
// sp.addNumber(v.begin(),v.end());

std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;}
catch(std::exception &e){
    std::cout << e.what() << std::endl;}
return 0;
}