#include <bits/stdc++.h>
using namespace std;

struct Curso 
{
    int codigo;
    string nombre;
};

struct Nota 
{
    int codigoCurso;
    string nombreAlumno;
    float nota;
};

int main() 
{
    vector<Curso> cursos;
    vector<Nota> notas;
    int opcion;

    do 
	{
        cout << "\n========== MENU ==========\n";
        cout << "1. Crear curso\n";
        cout << "2. Listar cursos existentes\n";
        cout << "3. Ingresar notas a un curso\n";
        cout << "4. Ver notas de un curso\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore(); // limpiar salto de línea

        if (opcion == 1) 
		{
    		Curso c;
    		cout << "\nIngrese codigo del curso: ";
    		cin >> c.codigo;
    		cin.ignore();

    		bool existe = false;
    		for (const auto& curso : cursos) 
			{
        		if (curso.codigo == c.codigo) 
				{
            		existe = true;
            		break;
        		}
    		}

    	if (existe) 
		{
        	cout << "Error: Ya existe un curso con el código " << c.codigo << ".\n";
    	} 
		else 
		{
        	cout << "Ingrese nombre del curso: ";
        	getline(cin, c.nombre);
        	cursos.push_back(c);
        	cout << "Curso creado correctamente.\n";
    		}
		}
        else if (opcion == 2) 
		{
            cout << "\n===== LISTA DE CURSOS =====\n";
            if (cursos.empty()) {
                cout << "No hay cursos registrados.\n";
            } else {
                for (int i = 0; i < (int)cursos.size(); i++) {
                    cout << "Codigo: " << cursos[i].codigo
                         << " | Nombre: " << cursos[i].nombre << endl;
                }
            }
        }

        else if (opcion == 3) {
            if (cursos.empty()) {
                cout << "\nNo existen cursos. Cree uno primero.\n";
                continue;
            }

            int codigoCurso;
            cout << "\nIngrese el codigo del curso: ";
            cin >> codigoCurso;
            cin.ignore();

            bool cursoExiste = false;
            for (int i = 0; i < (int)cursos.size(); i++) {
                if (cursos[i].codigo == codigoCurso) {
                    cursoExiste = true;
                    cout << "Ingresando notas para: " << cursos[i].nombre << endl;
                    break;
                }
            }

            if (!cursoExiste) {
                cout << "Codigo de curso no encontrado.\n";
                continue;
            }

            char continuar;
            do {
                Nota n;
                n.codigoCurso = codigoCurso;

                cout << "\nNombre del alumno: ";
                getline(cin, n.nombreAlumno);

                cout << "Nota: ";
                cin >> n.nota;
                cin.ignore();

                notas.push_back(n);

                cout << "¿Desea ingresar otra nota? (s/n): ";
                cin >> continuar;
                cin.ignore();
            } while (continuar == 's' || continuar == 'S');
        }

        else if (opcion == 4) {
            if (cursos.empty()) {
                cout << "\nNo existen cursos registrados.\n";
                continue;
            }

            int codigoCurso;
            cout << "\nIngrese el codigo del curso: ";
            cin >> codigoCurso;
            cin.ignore();

            string nombreCurso = "";
            for (int i = 0; i < (int)cursos.size(); i++) {
                if (cursos[i].codigo == codigoCurso) {
                    nombreCurso = cursos[i].nombre;
                    break;
                }
            }

            if (nombreCurso == "") {
                cout << "Curso no encontrado.\n";
                continue;
            }

            cout << "\n===== NOTAS DEL CURSO =====\n";
            cout << "Curso: " << nombreCurso << " (" << codigoCurso << ")\n";

            bool hayNotas = false;
            for (int i = 0; i < (int)notas.size(); i++) {
                if (notas[i].codigoCurso == codigoCurso) {
                    cout << "Alumno: " << notas[i].nombreAlumno
                         << " | Nota: " << notas[i].nota << endl;
                    hayNotas = true;
                }
            }

            if (!hayNotas) {
                cout << "No hay notas registradas para este curso.\n";
            }
        }

        else if (opcion == 5) {
            cout << "\nSaliendo del programa...\n";
        }

        else {
            cout << "\nOpcion invalida. Intente nuevamente.\n";
        }

    } while (opcion != 5);

    return 0;
}
