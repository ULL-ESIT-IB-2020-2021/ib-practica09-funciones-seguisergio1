#include <iostream>
#include <cstring>


// Funcion que va comparando el caracter dado con los caracteres de la palabra introducida
int PositionOfCharacter (std::string word, std::string character_to_find){
  int cout;
  for (auto &character: word){
    if(character_to_find.find(character) == std::string::npos){
      cout++ ;
      continue;
    }
    else{
      return cout;
    }
  }
  return -1;
}