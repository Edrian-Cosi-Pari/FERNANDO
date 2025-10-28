#include <bits/stdc++.h>
using namespace std;

int calcularMayor(int a, int b)
{
	if(a>b)
	{
		cout<<"El numero mayor entre "<<a<<" y "<<b<<" es: "<<a;
	}
	else
	{
		cout<<"El numero mayor entre "<<a<<" y "<<b<<" es: "<<b;
	}
}

int main()
{
	int a, b;
	cout<<"Ingresar dos numeros: "<<endl;
	cin>>a>>b;
	
	calcularMayor(a, b);
	
	return 0;
}
