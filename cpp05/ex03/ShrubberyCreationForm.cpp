/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:06:47 by youssama          #+#    #+#             */
/*   Updated: 2022/10/27 23:34:41 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::CantExecute::CantExecute()
{
}

const char* ShrubberyCreationForm::CantExecute::what() const throw()
{
    return "Shrubbery::GradeTooHighOrNotSigned";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target,145,137),myTarget(target)
{
    std::cout << "Default constructor for Shrubbery Form" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & obj) : Form(obj.myTarget,145,137),myTarget(obj.myTarget)
{
    std::cout << "Default copy constructor for Shrubbery Form" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm & obj)
{
    std::cout << "assignement operator for Shrubbery Form" << std::endl;
    (void)obj;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Default destructor for Shrubbery Form" << std::endl;
}

void treePrinter(std::ofstream & file)
{
    file << "        # #### ####          " << std::endl;
    file << "      ### \\/#|### |/####    " << std::endl;
    file << "     ##\\/#/ \\||/##/_/##/_#   " << std::endl;
    file << "   ###  \\/###|/ \\/ # ###    " << std::endl;
    file << " ##_\\_#\\_\\## | #/###_/_#### " << std::endl;
    file << "## #### # \\ #| /  #### ##/##" << std::endl;
    file << " __#_--###`  |{,###---###-~  " << std::endl;
    file << "           \\ }{              " << std::endl;
    file << "            }}{              " << std::endl;
    file << "            }}{              " << std::endl;
    file << "            }}{              " << std::endl;
    file << "      , -=-~{ .-^- _         " << std::endl;
    file << "            `}               " << std::endl;
    file << "             }               " << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->SignGetter() && executor.getGrade() <= 137)
    {
        std::ofstream myOutFile(myTarget+"_shrubbery");
        if (myOutFile.is_open())
        {
            treePrinter(myOutFile);
            myOutFile.close();
            return;
        }
        else
            throw std::out_of_range("Shrubbery::CantCreateFile");
    }
    throw CantExecute();
}