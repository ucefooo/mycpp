/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 03:32:24 by youssama          #+#    #+#             */
/*   Updated: 2022/11/02 00:28:32 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
std::list<int> maliststack;
maliststack.push_back(5);
maliststack.push_back(17);
// std::cout << maliststack.top() << std::endl;
maliststack.pop_back();
std::cout << maliststack.size() << std::endl;
maliststack.push_back(3);
maliststack.push_back(5);
maliststack.push_back(737);
//[...]
maliststack.push_back(0);
std::list<int>::iterator itl = maliststack.begin();
std::list<int>::iterator itel = maliststack.end();
++itl;
--itl;
while (itl != itel)
{
std::cout << *itl << std::endl;
++itl;
}
std::cout << "--------------------------------mystack result----\n";
//std::stack<int> s(mstack);
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
// std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
return 0;
}