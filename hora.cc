/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Gerald Schrödl Cabana
 * @date 7/11/2022
 * @brief Dados tres valores, colocarlos de forma horaria HH:MM:SS.
 */

#include <iostream>
using namespace std;
int main() {
  int hours;
  int minutes;
  int seconds;
  cout << "Introduzca la hora HH:MM:SS: " << endl;
  cin >> hours >> minutes >> seconds;
  if (seconds == 59) {
	  seconds = 00;
	  minutes = minutes + 1;
	  if (minutes == 59) {
		  minutes = 00;
		  hours = hours + 1;
	  }
  }
  cout << hours << ":" << minutes << ":" << seconds << endl;

  return 0;
}
