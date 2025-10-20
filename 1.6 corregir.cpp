#include <iostream>
using namespace std;

// Funci�n para calcular el valor absoluto
int valorAbsoluto(int n) {
    if (n < 0) {
        return -n;  // Si es negativo, devuelve su opuesto positivo
    } else {
        return n;   // Si es positivo o cero, devuelve el mismo n�mero
    }
}

int main() {
    int N;
    cout << "Ingrese un n�mero: ";
    cin >> N;

    int resultado = valorAbsoluto(N);
    cout << "El valor absoluto de " << N << " es: " << resultado << endl;

    return 0;
}
