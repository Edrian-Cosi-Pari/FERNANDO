#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream archivo("datos.txt", ios::in);
    if (!archivo.is_open()) {
        cout << "No se pudo abrir datos.txt\n";
        return 1;
    }

    string linea;
    
    // Leer todas las líneas con while
    while (getline(archivo, linea)) {

        cout << "Linea leida: " << linea << "\n";

        stringstream ss(linea);
        string campoCodigo;
        string campoNombre;
        string campoPromedio;

        // Separar por ;
        getline(ss, campoCodigo, ';');
        getline(ss, campoNombre, ';');
        getline(ss, campoPromedio, ';');

        cout << "Codigo: " << campoCodigo << "\n";
        cout << "Nombre: " << campoNombre << "\n";
        cout << "Promedio (texto): " << campoPromedio << "\n";
    }

    archivo.close();
    return 0;
}
