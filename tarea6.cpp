#include<bits/stdc++.h>
using namespace std;
 
struct Estudiante {
	int codigo;
	string nombre;
	double promedio;
};
 
int main() {
	Estudiante e;
	cout << "Ingrese los datos del estudiante:\n";
 
	cout << "Codigo: ";
	cin >> e.codigo;
	cin.ignore();  // limpiar salto de linea pendiente
 
	cout << "Nombre: ";
	getline(cin, e.nombre);
 
	cout << "Promedio: ";
	cin >> e.promedio;
 
	// Abrimos en modo append para no borrar datos previos
	ofstream archivo("datos_salida.txt", ios::app);
	if (!archivo.is_open()) {
    	cout << "No se pudo abrir datos_salida.txt para escritura.\n";
    	return 1;
	}
 
	// Escribimos en el formato codigo;nombre;promedio
	archivo << e.codigo << ";" << e.nombre << ";" << e.promedio << "\n";
 
	archivo.close();
 
	cout << "Estudiante guardado en datos_salida.txt\n";
	return 0;
}
