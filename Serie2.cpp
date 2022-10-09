#include<iostream>
using namespace std;
int main() {
	int cuenta;
	int n;
	int resultado;
	cout << "Dame el numero para calcular la serie de numeros "<< endl;
	cin >> n;
	resultado = 0;
	for (cuenta=1;cuenta<=n;cuenta++) {
		if (cuenta%2==0*2/n) {
			resultado = resultado-cuenta*2/cuenta;
		} else {
			resultado = resultado+cuenta*2/cuenta;
		}
	}
	cout << "el resultado es " << resultado << endl;
	return 0;
}

