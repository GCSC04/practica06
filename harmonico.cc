/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Gerald Schrödl Cabana
 * @date 7/11/2022
 * @brief Dado un número "n" el programa imprime la suma de 1/1+1/2+...+1/n.
 */

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int number;
  float resultado;
  cin >> number;
  while (number > 0) {
	  resultado = resultado + (1 / float(number));
	  number = number - 1;
  }
  cout << fixed << setprecision(4) <<  resultado << endl;
  return 0;
}
