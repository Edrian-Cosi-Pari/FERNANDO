#include <bits/stdc++.h>
using namespace std;

struct Cumple
{
	string nombre;
	string fecha;
	
	void imprimir()
	{
		
		cout<<nombre<<" cumple años el "<<fecha;
	}
	
};

int main ()
{
	
	Cumple x;
	cout<<"Ingresar el nombre del cumpleañero: "<<endl;
	cin>>x.nombre;
	cout<<"Ingrese la fecha del cumpleaños: "<<endl;
	cin>>x.fecha;
	
	x.imprimir();
	return 0;
}
