/*
Name: Sam Foucart
Project: CS3560 Project1 Library
Date: 1/28/2018
Description: This file will be compiled into a library.
It contains the function replace.
The function finds the input string, then deletes the
input string, then inserts the output string into the
string found from the standard input. If input is not
in the standard input string, then the original string 
is returned.
*/

#include "sf3560hw1h.h"
#include <string>

std::string samFoucart::replace(std::string input, std::string output, std::string line){
  int position = 0;
  position = line.find(input);
  if(position == std::string::npos){
    return line;
  }
  line = line.erase(position, input.length());
  line = line.insert(position, output);
  return line;
}

