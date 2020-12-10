#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <time.h>
#include <cstring>
#include "vector_statistics.h"


int main (int argc, char *argv[]){
  usage (argc, argv);
  double components = atoi(argv[1]);
  double lower_limit = atoi(argv[2]);
  double upper_limit = atoi(argv[3]);
  std::vector <double> total = RandomNumbersGen (components, lower_limit, upper_limit);
  std::cout << "La media es: " << Media (total, components) << std::endl;
  std::cout << "La suma es: " << Sum (total, components) << std::endl;
  std::cout << "El producto es: " << Product (total, components) << std::endl;
  std::cout << "El maximo es: " << MaximumValue(total) << std::endl;
  std::cout << "El minimo es: " << MinimumValue(total, upper_limit) << std::endl;
  return 0;
}
   