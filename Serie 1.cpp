#include<iostream>
using namespace std;
int main() {
	int cuenta;
	int n;
	int resultado;
	cout << "Dame un numero para el calculo" << endl;
	cin >> n;
	for (cuenta=1;cuenta<=n;cuenta++) {
		if (cuenta%2==0) {
			resultado = resultado-cuenta;
		} else {
			resultado = resultado+cuenta;
		}
	}
	cout << " el valor es " << resultado << endl;
	return 0;
}

