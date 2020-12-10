#include <iostream>
#include <string>
#include <cstring>
#include "find_first_of.h"


int main(int argc, char *argv[]){
  std::string word =argv[1];
  std::string character_to_find = argv[2];
  std::cout << PositionOfCharacter(word, character_to_find) << std::endl;
}