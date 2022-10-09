#include<iostream>
using namespace std;
int main() 
{
	
int i,n,f;
f=1;
cout <<"ingresa el numero para la serie"<<endl;
cin >> n;
for (i=1;i<=n;i++)
{
	cout << "" <<i <<endl;
	f=f*i;
}
cout<< "El resultado es" << n << " es :" <<f<<endl;
return 0;
}

