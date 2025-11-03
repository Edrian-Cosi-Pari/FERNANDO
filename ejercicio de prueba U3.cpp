#include <bits/stdc++.h>
using namespace std;
int main ()
{
	
	vector<float> notas;
	
	
	for(int i=0; i<notas.size(); i++)
	{
		float nota;
		cin>>nota;
		
		notas.push_back(nota);
	}
	for(float nota : notas)
	{
		if(nota>=10.5)
		{
			cout<<nota<<" aprovado";
		}
		else
		{
			cout<<nota<<" desaprovado";
		}
	}
	
	return 0;
}
