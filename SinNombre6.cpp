#include <bits/stdc++.h>
using namespace std;
float areaTrianguloR(float base, float altura)
{
	//f calcule el volumen de una esfera a partir de su radio.
	float area; area=(base*altura)/2; return area;
	return (base*altura)/2;
	
}
int main()
{
	float b, a, area;
	cout<<"ing.base "; cin>>b;
	cout<<"ing.altura ";cin>>a;//5
	area= areaTrianguloR(b,a);//4
	cout<<area; //10
	
	return 0;
}
