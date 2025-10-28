#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n, i, x[100];
	int suma=0;
	
	
	cout<<"Ingresar la cantidad de numeros a verificar: "<<endl;
	cin>>n;
	cout<<"Ingresar los numeros: "<<endl;
	for(i=0; i<n; i++)
	{
		cin>>x[i];
		
		if(x[i]%2==0)
		{
			suma=suma+1;
		}
		
	}
	cout<<"Hay "<<suma<<" numeros pares."<<endl;
	
	cout<<"Numeros ingresados: "<<endl;
	for(i=0; i<n; i++)
	{
		
		cout<<x[i]<<endl;
	}
	
	return 0;
}
