#include <iostream>
#include <cstring>
#include <vector>
#include <math.h>
#include "mersenne.h"



int main (int argc,char *argv[]){
  usage (argc, argv);
  int parameter = atoi(argv[1]);
  int prime_number;
  int current_number = 0;
  std::vector<int>vector_with_prime_numbers;
  NumbersOfVector (vector_with_prime_numbers, parameter, current_number, prime_number);
  std::cout << "la suma de los " << parameter << " primeros numeros de Mersenne es: " << Mersenne(vector_with_prime_numbers, parameter) << std::endl;
  return 0;
}   