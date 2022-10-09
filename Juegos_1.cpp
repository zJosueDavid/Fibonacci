#include<iostream>

#include<cstdlib>

#include <time.h>

using namespace std;
int main() {
  float num;
  srand(time(NULL));
  int random;
  float x;
  num = 0;
  random = (rand() % 999);
  x = 1;
  cout << "Juego - Adivina El Numero" << endl;
  cout << "Ingresa Un Numero Del 1 al 999" << endl;
  cout << "Tiene sin limites de Intentos" << endl;
  cout << " " << endl;
  do {
    cout << "#" << x << " Ingresa Un Numero: " << endl;
    cin >> num;
    if (num > 0 && num < 1000) {
      if (num < random) {
        cout << "El numero que ingresaste es Menor al Numero Oculto" << endl;
        x = x + 1;
        cout << " " << endl;
      } else {
        cout << "El numero que ingresaste es Mayor al Numero Oculto" << endl;
        x = x + 1;
        cout << " " << endl;
      }
    } else {
      cout << "El Numero No Es Valido" << endl;
      cout << "Intenta Denuevo" << endl;
      cout << " " << endl;
    }
  } while (num != random);
  x = x - 1;
  cout << "Felicidades lo hiciste en #" << x << " Intentos" << endl;
  cout << "El Numero Random Es: " << random << endl;
  return 0;
}

