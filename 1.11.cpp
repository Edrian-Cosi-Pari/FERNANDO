#include <iostream>
using namespace std;

//Función que calcula y muestra el impuesto y descuento
void calcularTotal(float precio, float impuesto = 18, float descuento = 0) 
{
    float montoImpuesto = precio * (impuesto / 100);
    float montoDescuento = precio * (descuento / 100);
    float total = precio + montoImpuesto - montoDescuento;

    cout << "Precio base: " << precio << endl;
    cout << "Impuesto (" << impuesto << "%): " << montoImpuesto << endl;
    cout << "Descuento (" << descuento << "%): " << montoDescuento << endl;
    cout << "Total a pagar: " << total << endl;
}

int main() 
{
    float precio, impuesto, descuento;
    char opcion;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    cout << "¿Desea ingresar un impuesto y descuento personalizados? (s/n): ";
    cin >> opcion;

    if (opcion == 's' || opcion == 'S') 
	{
        cout << "Ingrese el porcentaje de impuesto: ";
        cin >> impuesto;
        cout << "Ingrese el porcentaje de descuento: ";
        cin >> descuento;
        calcularTotal(precio, impuesto, descuento);
    } 
	else 
	{
        calcularTotal(precio);
    }

    return 0;
}
