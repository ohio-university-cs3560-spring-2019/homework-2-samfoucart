/*
Name: Sam Foucart
Project: CS3560 Project1 Main
Date: 1/28/2018
Description: This reads the standard input, then calls the 
replace function for each line of standard input.
*/


#include "sf3560hw1h.h"
#include <iostream>

int main(int argc, char* argv[]){
  if(argc < 3){
    // General Usage of program when less than 2 arguments entered.
    std::cerr << "Usage: " << argv[0] << " <INPUT> <OUTPUT> < file1 > file2 " << std::endl
              << "In file1, the string <INPUT> will be replaced by <OUTPUT> in file2." << std::endl;
    return 1;
  }
  std::string fileString;
  std::string input = argv[1];
  std::string output = argv[2];
  
  std::getline(std::cin, fileString);
  while(!std::cin.eof()){
    fileString = samFoucart::replace(input, output, fileString);
    std::cout << fileString << std::endl;
    std::getline(std::cin, fileString);
  }
  
  return 0;
    
}
