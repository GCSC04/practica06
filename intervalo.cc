/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Gerald Schrödl Cabana
 * @date 7/11/2022
 * @brief Dados dos números, imprimir el intervalo de números que hay entre ellos.
 */

#include <iostream>
using namespace std;
int main() {
  int number_1;
  int number_2;
  cin >> number_1 >> number_2;
  while (number_1 <= number_2) {
	  if (number_1 == number_2) {
		  cout << number_1 << endl;
		  break;
	  }
	  cout << number_1 << ",";
	  number_1 = number_1 + 1;
  }

  return 0;
}
