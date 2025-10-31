#include <bits/stdc++.h>
using namespace std;
int main ()
{
	string palabra;
	int n;
	
	cout<<"Ingresar una palabra para verificar: "<<endl;
	cin>>palabra;
	n=palabra.length();
	
	if(palabra[0]==palabra[n-1])
	{
		cout<<"SI.";
		
	}
	else
	{
		cout<<"NO.";
		
	}
	
	return 0;
}
