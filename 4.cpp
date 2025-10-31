#include <bits/stdc++.h>
using namespace std;

struct Notas
{
	string nombre;
	float nota;
	
	void imprimir()
	{
		if(nota >= 10.5)
		{
			cout<<"Aprobado.";
		}
		else
		{
			cout<<"Desaprobado.";
		}
	}
	
};

int main ()
{
	Notas x;
	
	cout<<"Ingresar el nombre: "<<endl;
	cin>>x.nombre;
	cout<<"Ingresar la nota: "<<endl;
	cin>>x.nota;
	
	x.imprimir();
	
	return 0;
}
