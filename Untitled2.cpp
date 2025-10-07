#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, opcion, nuevo, indice, k, esta=0;
	int x[100];

    cout << "¿Cuantos numeros deseas ingresar ? "<<endl;
    cin >> n;
    
	for (int i = 0; i < n; i++)
	{
        cout<< "Numero " << i + 1 << ": "<<endl;
        cin>> x[i];
    }
    
    do
    {
    	cout<< "\n===== MENU =====\n";
        cout<< "1. Ver numeros almacenados\n"<<endl;
        cout<< "2. Insertar al inicio\n"<<endl;
        cout<< "3. Insertar al final\n"<<endl;
        cout<< "4. Insertar en un indice especifico\n"<<endl;
        cout<< "5. Eliminar al inicio\n"<<endl;
        cout<< "6. Eliminar al final\n"<<endl;
        cout<< "7. Eliminar en un indice especifico\n"<<endl;
        cout<< "8. Buscar un numero\n"<<endl;
        cout<< "9. Salir\n"<<endl;
        cout<< "Elige una opcion: "<<endl;
        cin>> opcion;
    	
    	switch(opcion)
    	{
    		case 1: 
    		{
                cout << "Numeros: "<<endl;
                for (i = 0; i < n; i++)
                {
                	cout<<x[i]<<endl;
				}
				
                break;
			}
    		case 2: 
			{
                cout << "Ingrese numero: ";
                cin >> nuevo;
                for (i = n; i > 0; i--)
                {
                	x[i] = x[i - 1];
				}
				
				x[0] = nuevo;
                n=n+1;
                break;
			}
			case 3:
			{
				cout << "Ingrese numero: ";
                cin >> nuevo;
                x[n++] = nuevo;
                break;
			}
			case 4:
			{
				cout<< "Ingrese numero e indice(menor a la cantidad de numeros): ";
                cin>> nuevo;
                cin>> indice;
				if(indice >= 0 && indice < n)
				{
                	for(i=n; i > indice; i--)
                	{
                		x[i]=x[i-1];
					}
					x[indice]=nuevo;
					n=n+1;
				}
				else
				{
					cout<< "Indice no valido."<<endl;
				}
				break;
			}
			case 5:
			{
				if (n > 0) 
				{
                    for (int i = 0; i < n - 1; i++)
					{
						x[i] = x[i + 1];
					}
                    n=n-1;
                }
                break;
			}
			case 6:
			{
				if (n > 0) 
				{
					n=n-1;
				}
                break;
			}
			case 7:
			{
				cout << "Indice a eliminar: ";
                cin >> indice;
                if (indice >= 0 && indice < n) 
				{
                    for (int i = indice; i < n - 1; i++)
					{
						x[i] = x[i + 1];
					}
                    n=n-1;
                }
				else
				{
					cout << "Indice no valido."<<endl;
				}
                break;
			}
			case 8:
			{
				cout<<"Numero a buscar: "<<endl;
				cin>>k;
				for(i=0;i<n;i++)
				{
					if(x[i]==k)
					{
						esta=1;
					}
				}
				if(esta)
				{
					cout<<"Si se encontro.";
				}
				else
				{
					cout<<"No se encontro.";
				}
				break;
			}
			case 9:
            {
				cout << "Programa terminado."<<endl;
                break;
			}
			default:
			{
				cout << "Opcion no valida."<<endl;
			}
		}
    	
	}
    while (opcion != 9);
    
    return 0;
}
