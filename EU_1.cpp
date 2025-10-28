#include <bits/stdc++.h>
using namespace std;
int main ()
{
	string nombre;
	int n;
	
	cout<<"Ingresar un nombre: "<<endl;
	cin>>nombre;
	
	n=nombre.length();
	
	if(nombre[n-1]=='a')
	{
		cout<<"Es una DAMA.";
		
	}
	else
	{
		if(nombre[n-1]=='o')
		{
			cout<<"Es un VARON.";
		}
		else
		{
			cout<<"Es NEUTRO.";
		}
		
	}
	return 0;
}

