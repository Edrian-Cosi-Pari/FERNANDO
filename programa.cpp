#include<bits/stdc++.h>
using namespace std;
 
int main() {
	ifstream archivo("datos.txt", ios::in);
	if (!archivo.is_open()) {
    	cout << "No se pudo abrir datos.txt\n";
    	return 1;
	}
 
	string linea;
	if (getline(archivo, linea)) {
    	cout << "Linea leida: " << linea << "\n";
 
    	stringstream ss(linea);
    	string campoCodigo;
    	string campoNombre;
    	string campoPromedio;
 
    	// Leer hasta ';'
    	getline(ss, campoCodigo, ';');
    	getline(ss, campoNombre, ';');
    	getline(ss, campoPromedio, ';');
 
    	cout << "Codigo: " << campoCodigo << "\n";
    	cout << "Nombre: " << campoNombre << "\n";
    	cout << "Promedio (texto): " << campoPromedio << "\n";
	} else {
    	cout << "El archivo esta vacio o no se pudo leer la linea.\n";
	}
 
	archivo.close();
	return 0;
}
