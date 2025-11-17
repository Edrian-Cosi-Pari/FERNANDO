#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
	string nombreArchivo = "salida.txt";
 
	// 2) Escribir en modo ios::app (agrega al final)
	{
    	ofstream archivoApp(nombreArchivo, ios::app); // agrega al final
    	if (!archivoApp.is_open()) 
		{
        	cout << "No se pudo abrir " << nombreArchivo << " en modo app.\n";
        	return 1;
    	}
    	archivoApp << "Linea agregada con ios::app\n";
    	archivoApp.close();
	}
 
	cout << "Se agrego una linea con ios::app (el contenido previo se conserva).\n";
 
	// 3) Mostrar el contenido final del archivo para verificar
	{
    	ifstream archivoLectura(nombreArchivo);
    	if (!archivoLectura.is_open()) 
		{
        	cout << "No se pudo abrir " << nombreArchivo << " para lectura final.\n";
        	return 1;
    	}
 
    	cout << "\nContenido actual de " << nombreArchivo << ":\n";
    	string linea;
    	while (getline(archivoLectura, linea)) 
		{
        	cout << linea << "\n";
    	}
 
    	archivoLectura.close();
	}
 
	return 0;
}
