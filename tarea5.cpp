#include<bits/stdc++.h>
using namespace std;

struct Estudiante {
    int codigo;
    string nombre;
    double promedio;
};

int main() {
    ifstream archivo("datos.txt", ios::in);
    if (!archivo.is_open()) {
        cout << "No se pudo abrir datos.txt\n";
        return 1;
    }

    string linea;

    // Leer todas las líneas
    while (getline(archivo, linea)) {

        Estudiante e;

        stringstream ss(linea);
        string campoCodigo;
        string campoPromedio;

        // Separar por ;
        getline(ss, campoCodigo, ';');
        getline(ss, e.nombre, ';');
        getline(ss, campoPromedio, ';');

        // Convertir a tipos correctos
        e.codigo = stoi(campoCodigo);
        e.promedio = stod(campoPromedio);

        // Mostrar
        cout << "Estudiante cargado desde la linea:\n";
        cout << "Codigo: " << e.codigo << "\n";
        cout << "Nombre: " << e.nombre << "\n";
        cout << "Promedio: " << e.promedio << "\n";
    }

    archivo.close();
    return 0;
}
