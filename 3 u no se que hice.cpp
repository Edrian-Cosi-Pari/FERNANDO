#include <bits/stdc++.h>
using namespace std;
int main ()
{
	vector<string> Personas;
	vector<int> Edades;
	string nombre;
	int edad, cantidad;
	cout<<"Ingresar la cantidad de nombres: "<<endl;
	cin>>cantidad;
	
	for(int i=0; i<cantidad; i++)
	{
    	cout<<"Ingresar nombre: "<<endl;
    	cin>>nombre;
		Personas.push_back(nombre);
		
		cout<<"Ingresar la edad: "<<endl;
    	cin>>edad;
    	Edades.push_back(edad);
	}
	
	sort(Edades.begin(), Edades.end());
	
	cout<<"============LISTA DE PERSONAS============="<<endl;
	cout<<"      NOMBRES      |         EDADES       "<<endl;
	for(int i=0; i<Edades.size(); i++)
	{
		
		cout<<Personas[i]<<"    "<<Edades[i]<<endl;		

	}
	
}
