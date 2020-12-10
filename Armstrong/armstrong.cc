#include <iostream>
#include <cstring>
#include <math.h>
#include <vector>
#include "armstrong.h"

// Esta funcion devuelve si un numero es de Armstrong o no, utilizando un bucle while en el que se va dividiendo el numero entre diez y va sumando a un contador el número de dígitos
bool Armstrong (int parameter){
  std::vector <int> digits;
  int number_of_digits = 0;
  int real_number = parameter;
  while (parameter != 0){
    digits.push_back (parameter % 10);
    parameter /= 10;
    ++number_of_digits;
  }
  int armstrong_number = 0;
  for (int i = 0; i< number_of_digits; i++){
    armstrong_number += std::pow(digits[i],number_of_digits);
  }
  return (armstrong_number == real_number);
}