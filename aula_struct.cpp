#include <bits/stdc++.h>
using namespace std;

struct aula
{
	string numero;
	int piso;
	
	void imprimir()
	{
		cout<<"El aula "<<numero<<" esta ubicado en el piso "<<piso<<".";
	}
};

int main()
{
	aula x;
	
	cout<<"Datos del aula: "<<endl;
	cout<<"Ingresar el piso del aula: "<<endl;
	cin>>x.piso;
	cout<<"Ingresar el numero del aula: "<<endl;
	cin>>x.numero;
	
	x.imprimir();
}
