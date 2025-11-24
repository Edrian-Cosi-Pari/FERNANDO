//Sistema de notas escolares

// host https://prod.liveshare.vsengsaas.visualstudio.com/join?763486B310A2C0617E432384215DA8F9556A

#include <bits/stdc++.h>
using namespace std;	

struct Alumno {
	
	int id;
	string nombre;
	string grado;
	float promedio;
	string seccion;
	
};

struct Curso {
	
	int id;
	string nombre;
	
};

vector<Curso> cursos;
vector<Alumno> alumnos;

void registrarCursos(){
	
	Curso x;
	cout<<"Ingrese el nombre del curso: "; cin.ignore(); getline(cin,x.nombre);
	cout<<"Ingrese el id del curso: "; cin>>x.id;
	cursos.push_back(x);
	cout<<"Curso "<<x.nombre<<" registrado con ID "<<x.id<<endl;
	
	//luis Conde
	
}

void registrarAlumnos(){
	
	Alumno x;
	cout<<"Ingrese el nombre del Alumno: "; cin.ignore(); getline(cin,x.nombre);
	cout<<"Ingrese el nivel (Primaria/Secundaria): "; cin>>x.grado;
	cout<<"Ingrese el grado (Primero..Quinto): "; cin>>x.seccion;
	alumnos.push_back(x);
	cout<<"Alumno "<<x.nombre<<" registrado en "<<x.seccion<<" de "<<x.grado<<endl;;

	//luis Conde
	
}

void listarAlumnos(){
	
	if(alumnos.empty()) { cout<<"Registre un alumno primero."<<endl;}
	
	else {
    // 1. Calcular los anchos máximos de cada columna (incluye títulos)
    int maxNombre = 6; // "NOMBRE"
    int maxNivel  = 5; // "NIVEL"
    int maxGrado  = 5; // "GRADO"

    for (auto a : alumnos) {
        maxNombre = max(maxNombre, (int)a.nombre.size());
        maxNivel  = max(maxNivel,  (int)a.grado.size());
        maxGrado  = max(maxGrado,  (int)a.seccion.size());
    }

    // Espacio adicional para que quede estético
    maxNombre += 2;
    maxNivel  += 2;
    maxGrado  += 2;

    // 2. Imprimir encabezado
    cout << left<< setw(maxNombre) << "NOMBRE"<< " | "<< setw(maxNivel)  << "NIVEL"<< " | "<< setw(maxGrado)  << "GRADO"<< "\n";

    // 3. Línea separadora dinámica
    int total = maxNombre + maxNivel + maxGrado + 6; // " | " son 3 chars × 2 separadores

    for (int i = 0; i < total; i++)
        cout << "-";
    cout << "\n";

    // 4. Imprimir las filas
    for (auto a : alumnos) {
        cout << left<< setw(maxNombre) << a.nombre<< " | "<< setw(maxNivel)  << a.grado<< " | "<< setw(maxGrado)  << a.seccion<< "\n";
    }
	}
	// Edrian Cosi
}
	
void listarCursos(){
	
	if(cursos.empty()) { cout<<"Registre un curso primero."<<endl;}
	
	else {
	cout<<"\n----LISTA DE CURSOS----";
	for ( auto c : cursos) { cout<<c.nombre<<" | ID: "<<c.id<<endl; }
	}
}

int main () {
	//Luis Conde
	
	int op;
	do {
		cout<<"\n=====SISTEMA DE NOTAS=====\n";
		cout<<"1) Registrar curso"<<endl;
		cout<<"2) Registrar alumno"<<endl;
		cout<<"3) Lista de alumnos"<<endl;
		cout<<"4) Lista de cursos"<<endl;
		cout<<"5) Salir."<<endl;
		cout<<"\nIngrese una opcion: "; cin>>op;
		
		switch(op) {
		case 1: registrarCursos(); break;
		case 2: registrarAlumnos(); break;
		case 3: listarAlumnos(); break;
		case 4: listarCursos(); break;
		case 5: cout<<"Programa finalizado."; break;
		default: cout<<"Opcion invalida, eliga otra."<<endl; break;
		}
		
	}	
	while(op !=5);	
	return 0;
}
