include <iostream>
#include <cstring>
#include <math.h>
#include <vector>
#include "armstrong.h"


int main (int argc, char *argv[]){
  int parameter = std::stoi(argv[1]);
  if (Armstrong(parameter) == true){
    std::cout << parameter << " is an Armstrong number" << std::endl;
  }
  if (Armstrong(parameter)== false){
    std::cout << parameter << " is not an Armstrong number" << std::endl;
  }
}