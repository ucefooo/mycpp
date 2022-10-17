/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:41:03 by youssama          #+#    #+#             */
/*   Updated: 2022/10/02 15:11:40 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int c, char **v)
{
    int i = 1;
    int j = 0;

    if (c == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (v[i])
    {
        j = 0;
        while (v[i][j])
        {
            if ((v[i][j] >= 'a' && v[i][j] <= 'z'))
                std::cout << (char)(v[i][j] - 32);
            else
                std::cout << v[i][j];
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}