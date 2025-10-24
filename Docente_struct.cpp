#include <bits/stdc++.h>
using namespace std;

struct docente
{
	string nombre;
	int edad;
	string profesion;
	void imprimir()
	{
		cout<<nombre<<" tiene "<<edad<<" años y ejerce la profesion de "<<profesion<<".";
	}
	
};

int main()
{
	docente x;
	
	x.nombre="Roberto";
	x.edad=28;
	x.profesion="Profesor";
	
	x.imprimir();
}
