#include <bits/stdc++.h>
using namespace std;
string pedirnombre()
{
	string nom;
	cout<<"Ingrese su nombre: ";
	cin>>nom;
	return nom;
}
int main()
{
	string n; 
	n = pedirnombre();
	cout<<"Hola "<<n;
	
	return 0;
}
