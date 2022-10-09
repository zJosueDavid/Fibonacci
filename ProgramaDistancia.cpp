#include <iostream>
#include <math.h>

// cin ES LEER
// cout ES Escribir
// tipos de datos- string - Texto= "ejemplo"
// int - Es un entero
// Float - flotante -3.141, -23.45
using namespace std;

int main()
{
	int Velocidad =0;
	cout<<"Dame la velocidad";
	cin>>Velocidad;
	
	
	if( Velocidad> 0) // VERDADERO O FALSO
	{
     cout<<"Dame el angulo en grados";
     float Grados =0.0;
	 cin>>Grados;
     if( Grados > 0 && Grados < 90 )
     {
     	float radianes = Grados *3.1416/180;
     	float distancia = Velocidad * Velocidad * sin(2* radianes) /9.81 ;
    cout<<" Valor de angulo en Grados "<< Grados;
    cout<<" Valor de angulo en radianes "<< radianes;
    cout<<" Valor de la distancia "<< distancia;
	 }
     
	}
}
