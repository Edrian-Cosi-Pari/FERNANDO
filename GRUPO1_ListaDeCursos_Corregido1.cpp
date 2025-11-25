//Sistema de notas escolares

// https://prod.liveshare.vsengsaas.visualstudio.com/join?2E389C09ED33BF32CDF8954CF97FCF98E077

#include <bits/stdc++.h>
using namespace std;	

struct Alumno {
	
	int id;
	string nombre;
	string nivel;
	float promedio;
	string grado;
	
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
}

void registrarAlumnos(){
	
	Alumno x;
	cout<<"Ingrese el nombre del Alumno: "; cin.ignore(); getline(cin,x.nombre);
	cout<<"Ingrese el nivel (Primaria/Secundaria): "; cin>>x.nivel; 
	cout<<"Ingrese el grado (Primero..Quinto): "; cin>>x.grado;
	alumnos.push_back(x);
	cout<<"Alumno "<<x.nombre<<" registrado en "<<x.grado<<" de "<<x.nivel<<endl;
}

void listarAlumnos(){
	
	if(alumnos.empty()) { 
		cout<<"Registre un alumno primero."<<endl;
	}
	else {
	    int maxNombre = 6;
	    int maxNivel  = 5;
	    int maxGrado  = 5;

	    for (auto a : alumnos) {
	        maxNombre = max(maxNombre, (int)a.nombre.size());
	        maxNivel  = max(maxNivel,  (int)a.nivel.size());
	        maxGrado  = max(maxGrado,  (int)a.grado.size()); 
	    }

	    maxNombre += 2;
	    maxNivel  += 2;
	    maxGrado  += 2;

	    cout << left<< setw(maxNombre) << "NOMBRE" << " | "<< setw(maxNivel)  << "NIVEL"  << " | "<< setw(maxGrado)  << "GRADO"  << "\n";

	    int total = maxNombre + maxNivel + maxGrado + 6;

	    for (int i = 0; i < total; i++){
	    	cout << "-";
		}
	    cout << "\n";

	    for (auto a : alumnos) {
	        cout << left<< setw(maxNombre) << a.nombre << " | "<< setw(maxNivel)  << a.nivel  << " | " << setw(maxGrado)  << a.grado  << "\n";
	    }
	}
}

void listarCursos(){
	
	if(cursos.empty()) { 
		cout<<"Registre un curso primero."<<endl;
	}
	else {
		cout<<"\n----LISTA DE CURSOS----\n";

    int maxNombre = 0;

    for (auto &c : cursos) {
        maxNombre = max(maxNombre, (int)c.nombre.size());
    }

    maxNombre += 2;

    for (auto &c : cursos) {
        cout << left << setw(maxNombre) << c.nombre<< " | ID: "<< c.id << "\n";
    }
	}
}


int main () {
	
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
