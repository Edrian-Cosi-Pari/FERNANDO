#include <bits/stdc++.h>
using namespace std;

float CalcularM(float a, float b)
{
	
	return a*b;
}


int main ()
{
	float a;
	float b;
	float n;
	
	cout<<"Ingresar el primer numero: "<<endl;
	cin>>a;
	cout<<"Ingresar el segundo numero: "<<endl;
	cin>>b;
	
	n=CalcularM(a, b);
	
	cout<<"El resultado de la multiplicacion de "<< a <<" y "<<b<<" es "<<n;
	
	return 0;
}
