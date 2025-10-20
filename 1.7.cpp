#include <bits/stdc++.h>
using namespace std;

// Función que calcula el perímetro
float calcularPerimetro(float a, float b) 
{
    float hipotenusa = sqrt(a * a + b * b);
    float perimetro = a + b + hipotenusa;
    return perimetro;
}

int main() 
{
    float A, B;

    cout << "Ingrese el valor del cateto A: ";
    cin >> A;

    cout << "Ingrese el valor del cateto B: ";
    cin >> B;

    float perimetro = calcularPerimetro(A, B);

    cout << "El perimetro del triangulo rectangulo es: " << perimetro << endl;

    return 0;
}
