#include<iostream>
using namespace std;

bool verificafecha(int d, int m, int a);

bool verificafecha(int d, int m, int a) {
	bool ver;
	if (d>0 && m>0 && a>0) {
		if (m<=12) {
			switch (m) {
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				if (d<=31) {
					ver = true;
				}
				else
				    ver = false;
				break;
			case 4: case 6: case 9: case 11:
				if (d<=30) {
					ver = true;
				} else {
					ver = false;
				}
				break;
			case 2:
				if (d<=28) {
					ver = true;
				} else {
					if (a%4==0 && a%100!=0 && d==29) {
						ver = true;
					} else {
						if (a%400==0 && d==29) {
							ver = true;
						} else {
							ver = false;
						}
					}
				}
				break;
			}
		}
	}
	return ver;
}

int main() {
	int anio;
	int dia;
	int mes;
	cout << "Dame una fecha,dia,mes y año" << "El año es 4 digitos" << endl;
	cin >> dia >> mes >> anio;
	if (verificafecha(dia,mes,anio)) {
		cout << "fecha valida" << endl;
	} else {
		cout << "Fecha incorrecta" << endl;
	}
	return 0;
}

