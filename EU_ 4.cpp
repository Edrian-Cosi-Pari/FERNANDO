#include <bits/stdc++.h>
using namespace std;

struct Cumple
{
	string nombre;
	string fecha;
	
	void imprimir()
	{
		
		cout<<nombre<<" cumple a�os el "<<fecha;
	}
	
};

int main ()
{
	
	Cumple x;
	cout<<"Ingresar el nombre del cumplea�ero: "<<endl;
	cin>>x.nombre;
	cout<<"Ingrese la fecha del cumplea�os: "<<endl;
	cin>>x.fecha;
	
	x.imprimir();
	return 0;
}
