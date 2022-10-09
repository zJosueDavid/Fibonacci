#include<iostream>
using namespace std;
int main() {
	float a;
	float b;
	float c;
	float i;
	float n;
	cout << "ingresa n" << endl;
	cin >> n;
	a = 0;
	b = 1;
	for (i=1;i<=n;i++) {
		cout << a << endl;
		c = +a+b;
		a = +b;
		b = c;
	}
	return 0;
}

