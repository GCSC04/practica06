/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Gerald Schrödl Cabana
 * @date 7/11/2022
 * @brief Convierte una letra mayúscula en una minúscula y viceversa.
 */

#include <iostream>
using namespace std;
int main() {
  char letter;
  int value;
  cin >> letter;
  value = static_cast <int> (letter); 
  if (value >= 97) {
	  value = value - 32;
	  letter = static_cast <char> (value);
  }
  else {
	  value = value + 32;
	  letter = static_cast <char> (value);
  }
  cout << letter << endl;
  return 0;
}
