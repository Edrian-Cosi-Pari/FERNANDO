#include<bits/stdc++.h>
using namespace std;
 
int main() {
	ifstream archivo("entrada.txt", ios::in);
 
	if (!archivo.is_open()) {
    	cout << "No se pudo abrir entrada.txt\n";
    	return 1;
	}
 
	string linea;
	cout << "Contenido de entrada.txt:\n";
 
	// Leer hasta fin de archivo
	while (getline(archivo, linea)) {
    	cout << linea << "\n";
	}
 
	archivo.close();
    return 0;
}

