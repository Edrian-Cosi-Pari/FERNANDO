#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n, i, x[100];
	int suma=0;
	
	cout<<"Indicar la cantidad de numeros que ingresaras: "<<endl;
	cin>>n;
	
	cout<<"Ingresa los numeros: "<<endl;
	
	for(i=0; i<n; i++)
	{
		cin>>x[i];
		
	}
	
	for(i=0; i<n; i++)
	{
		if(x[i]==x[n-1])
		{
			suma=suma+1;
		}
		
	}
	
	if(suma>1)
	{
		cout<<"Hay "<<suma<<" numeros iguales a "<<x[n-1];
		
	}
	else
	{
		cout<<"No se repite ningun numero con el ultimo.";
		
	}
	
	return 0;
}
