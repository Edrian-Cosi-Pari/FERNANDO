#include <bits/stdc++.h>
using namespace std;

#ifdef _WIN32
 #include <windows.h>
#endif

void configurarEspanol()
{
    #ifdef _WIN32
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    #endif
    setlocale(LC_ALL, "es_ES.UTF-8");
}

struct aula
{
    string nombre;
    int capacidad;
    int piso;

    // Función dentro del struct
    void imprimir()
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Capacidad: " << capacidad << " personas" << endl;
        cout << "Piso: " << piso << endl;
    }

    // Función para verificar disponibilidad
    bool estaDisponible(int personasRequeridas)
    {
        return personasRequeridas <= capacidad;
    }

    // Nueva función: actualizar capacidad
    void actualizarCapacidad(int nuevaCapacidad)
    {
        if (nuevaCapacidad > 0)
        {
            capacidad = nuevaCapacidad;
            cout << "Capacidad actualizada a " << capacidad << " personas." << endl;
        }
        else
        {
            cout << "Error: la capacidad debe ser mayor que 0." << endl;
        }
    }
};

int main()
{
    configurarEspanol();

    aula aula1;
    aula1.nombre = "Aula A-101";
    aula1.capacidad = 30;
    aula1.piso = 1;

    // Llamar a las funciones del struct
    aula1.imprimir();

    cout << "\n ¿Disponible para 25 personas? ";
    if (aula1.estaDisponible(25))
        cout << "Si" << endl;
    else
        cout << "No" << endl;

    // Probar la nueva función
    cout << "\nActualizando capacidad del aula..." << endl;
    aula1.actualizarCapacidad(40);
    aula1.imprimir();

    return 0;
}
