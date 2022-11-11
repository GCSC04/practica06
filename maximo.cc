/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Gerald Schrödl Cabana
 * @date 7/11/2022
 * @brief Dados tres números por el usuario, imprime el mayor.
 */

#include <iostream>
using namespace std;
int main() {
  int number_1;
  int number_2;
  int number_3;
  cout << "Introduzca tres números: " << endl;
  cin >> number_1 >> number_2 >> number_3;
  if (number_1 > number_2) {
	  if (number_1 > number_3) {
		  cout << number_1 << endl;
	  }
	  else {
		  cout << number_3 << endl;
	  }

  }
  else {
	  if (number_2 > number_3) {
		  cout << number_2 << endl;
	  }
	  else {
		  cout << number_3 << endl;
	  }


  }
  return 0;
}
