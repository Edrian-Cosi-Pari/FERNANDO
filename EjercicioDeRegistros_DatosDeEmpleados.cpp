#include <bits/stdc++.h>
using namespace std;

struct Empleado 
{
    string nombre;
    float salario;
    
};

int main() 
{
    int N;
	cout<<"Ingresar la cantidad de trabajadores: "<<endl;
	cin>>N; 
    Empleado empleados[N];

    for (int i = 0; i < N; i++) 
	{
        cout << "Ingrese el nombre del empleado " << i + 1 << ": ";
        cin >> empleados[i].nombre;

        cout << "Ingrese el salario: ";
        cin >> empleados[i].salario;

        cout << endl;
    }

    int indiceMayor = 0;
    int indiceMenor = 0;

    for (int i = 1; i < N; i++) 
	{
        if (empleados[i].salario > empleados[indiceMayor].salario) 
		{
            indiceMayor = i;
        }
        if (empleados[i].salario < empleados[indiceMenor].salario) 
		{
            indiceMenor = i;
        }
    }

    cout << "Empleado con salario mas alto:" << endl;
    cout << "Nombre: " << empleados[indiceMayor].nombre << endl;
    cout << "Salario: " << empleados[indiceMayor].salario << endl;

    cout << "\nEmpleado con salario mas bajo:" << endl;
    cout << "Nombre: " << empleados[indiceMenor].nombre << endl;
    cout << "Salario: " << empleados[indiceMenor].salario << endl;

    return 0;
}
