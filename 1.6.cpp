#include <bits/stdc++.h>
using namespace std;

// Funci�n para calcular el valor absoluto
int valorAbsoluto(int n) 
{
    if (n < 0) 
	{
        int M = -n;
		return M;
    } 
	else 
	{
        return n;
    }
}

int main() 
{
    int N;
    cout << "Ingrese un n�mero: ";
    cin >> N;

    int resultado = valorAbsoluto(N);
    cout << "El valor absoluto de " << N << " es: " << resultado << endl;

    return 0;
}
