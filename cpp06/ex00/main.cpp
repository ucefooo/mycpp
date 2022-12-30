/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 01:50:34 by youssama          #+#    #+#             */
/*   Updated: 2022/10/30 03:01:23 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TestClass.hpp"

float CharToFloat(char *v)
{
    float out = static_cast<float>(std::strtod(v,NULL));
    return (out);
}

double CharToDouble(char *v)
{
    double out = std::strtod(v,NULL);
    return (out);
}

int CharToInt(char *v)
{
    int out = std::atoi(v);
    return (out);
}

std::string Parc(char *v)
{
    int i=0;
    if (v[0] == '-' || v[0] == '+')
        i = 1;
    else
        i = 0;
    if (!v[1] && isdigit(v[0]) == 0)
        return ("char");
    if (isdigit(v[i]) == 0)
        return ("nothing");
    while(v[i] && v[i] != '.' && v[i] != ',')
        i++;
    if (v[i] == '\0')
        return ("int");
    if (v[0] == '-' || v[0] == '+')
        i = 1;
    else
        i = 0;
    while(v[i] && isdigit(v[i]))
    {
        if (v[i+1] == '.' || v[i+1] == ',')
            i++;
        i++;
    }
    if (v[i] == 'f' && !v[i+1])
        return ("float");
    else if (!v[i])
        return ("double");
    return ("nothing");
}

int CheckParam(std::string Check)
{
    if (Check == "char")
        return (1);
    if (Check == "int")
        return (2);
    if (Check == "float")
        return (3);
    if (Check == "double")
        return (4);
    return (5);
}

int main(int c, char **v)
{
    if (c!=2)
    {
        std::cout << "Please enter Arg" << std::endl;
        return (1);
    }
    std::string cd = v[1];
    int cas;
    if (cd == "nan" || cd == "nanf" || cd == "inf" || cd == "-inf" || cd == "inff" || cd == "-inff" || cd == "+inf" || cd == "+inff")
        cas = 3;
    else
        cas = CheckParam(Parc(v[1]));
    switch (cas)
    {
    case 1:
        int c;
        c = static_cast<int>(v[1][0]);
        if (c >= 0 && c <= 31)
            std::cout << "char: Non displayable" << std::endl;
        else if (c < 0 || c > 126)
            std::cout << "char: impossible" << std::endl;
        else
            std::cout << "char: \'" << static_cast<char>(c) << "\'" << std::endl;
        std::cout << "int: " << c << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
        break;
    case 2:
        c = CharToInt(v[1]);
        if (c >= 0 && c <= 31)
            std::cout << "char: Non displayable" << std::endl;
        else if (c < 0 || c > 126)
            std::cout << "char: impossible" << std::endl;
        else
            std::cout << "char: \'" << static_cast<char>(c) << "\'" << std::endl;
        std::cout << "int: " << c << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
        break;
    case 3:
        float f;
        f  = CharToFloat(v[1]);
        c = static_cast<int>(f);
        if (c >= 0 && c <= 31)
            std::cout << "char: Non displayable" << std::endl;
        else if (c < 0 || c > 126)
            std::cout << "char: impossible" << std::endl;
        else
            std::cout << "char: \'" << static_cast<char>(c) << "\'" << std::endl;
        if (!isnan(f))
        {
            std::cout << "int: " << static_cast<int>(f) << std::endl;
            if (roundf(f) == f && cd != "inff" && cd != "-inff" && cd != "+inff" && cd != "inf" && cd != "-inf" && cd != "+inf")
            {
                std::cout << "float: " << f << ".0f" << std::endl;
                std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
            }
            else
            {
                std::cout << "float: " << f << "f" << std::endl;
                std::cout << "double: " << static_cast<double>(f) << std::endl;
            }
            
        }
        else
        {
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: " << f << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(f) << std::endl;
        }
        break;
    case 4:
        double d;
        d  = CharToDouble(v[1]);
        c = static_cast<int>(d);
        if (c >= 0 && c <= 31)
            std::cout << "char: Non displayable" << std::endl;
        else if (c < 0 || c > 126)
            std::cout << "char: impossible" << std::endl;
        else
            std::cout << "char: \'" << static_cast<char>(c) << "\'" << std::endl;
        if (!isnan(d))
        {
            std::cout << "int: " <<static_cast<int>(d) << std::endl;
            if (roundf(d) == d)
            {
                std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
                std::cout << "double: " << d << ".0" << std::endl;
            }
            else
            {
                std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
                std::cout << "double: " << d << std::endl;
            }
            
        }
        else
        {
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
            std::cout << "double: " << d << std::endl;
        }
        break;
    
    default:
        std::cout << "enter a valid type"<<std::endl;
        break;
    }
}