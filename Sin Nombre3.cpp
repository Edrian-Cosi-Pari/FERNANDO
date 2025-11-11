#include <bits/stdc++.h>
using namespace std;

int main()
{
    int opcion;
    string cliente;
    queue<string> clientes;
    
    do
    {
        cout << "======Menu======\n";
        cout << "1. Ingresar el nombre del cliente\n";
        cout << "2. Atender al siguiente cliente\n";
        cout << "3. Salir\n";
        cout << "4. Ver clientes en cola\n";
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        
        switch(opcion)
        {
            case 1:
            {
                cout << "Ingresar el nombre del cliente: ";
                cin >> cliente;
                clientes.push(cliente);
                cout << "Cliente agregado a la cola.\n";
                break;
            }
            case 2:
            {
                if(clientes.empty())
                {
                    cout << "No hay clientes en la cola.\n";
                }
                else
                {
                    cout << "Atendiendo al cliente: " << clientes.front() << endl;
                    clientes.pop();
                }
                break;
            }
            case 3:
            {
                cout << "Saliendo del sistema.\n";
                break;
            }
            case 4:
            {
                if(clientes.empty())
                {
                    cout << "No hay clientes en la cola.\n";
                }
                else
                {
                    cout << "Clientes en espera:\n";
                    queue<string> aux = clientes; // copia para no modificar la original
                    while(!aux.empty())
                    {
                        if(aux.front() == clientes.front())
                            cout << aux.front() << " <-- siguiente a atender\n";
                        else
                            cout << aux.front() << endl;
                        aux.pop();
                    }
                }
                break;
            }
            default:
            {
                cout << "Opcion no valida, intente de nuevo.\n";
                break;
            }
        }
        
        cout << "\n"; // salto de linea para estética
        
    } while(opcion != 3);
    
    return 0;
}
