/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:13:37 by youssama          #+#    #+#             */
/*   Updated: 2022/10/07 20:30:19 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void print(int from, int to,std::string str, std::ofstream &myOutFile)
{
    while(from<=to)
        myOutFile << str[from++];
    return;
}

int main(int c, char **v)
{
    int i=0;
    int found=-1;
    if (!v[1] || !v[2] || !v[3] || c > 4)
      return (std::cout << "Error in args please enter FileName Str1 Str2" <<std::endl) || 1;
    std::string line;
    std::string f=v[2];
    std::string StrRepl=v[3];
    std::ifstream myFile (v[1]);
    if (myFile.is_open())
    {
      std::ofstream myOutFile(v[1] + (std::string)".replace");
      if (myOutFile.is_open())
      {
        while (getline (myFile,line))
        {
          found = line.find(v[2]);
          i=0;
          if (found != -1)
          while ((unsigned long)i < line.length())
          {
            print(i,found-1,line, myOutFile);
            print(0,StrRepl.length() - 1,StrRepl, myOutFile);
            i = found + f.length();
            found = line.find(v[2],found+1);
            if (found == -1)
            {
              print(i,line.length() - 1,line, myOutFile);
              break;
            }
          }
          else 
          {
            myOutFile << line;
            i=0;
          }
          myOutFile <<std::endl;
        }
      }
      else{ return (std::cout << "Unable to open Outputfile") || 1;}
      myOutFile.close();
      myFile.close();
    }
    else std::cout << "Unable to open inputfile"; 
    
  return (0);
}