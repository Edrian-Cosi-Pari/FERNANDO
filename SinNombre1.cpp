#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int M, N, O;
    int i, j, k;

    cout << "Ingrese filas de A (M): ";
    cin >> M;
    cout << "Ingrese columnas de A, las cuales seran filas de B (N): ";
    cin >> N;
    cout << "Ingrese columnas de B (O): ";
    cin >> O;

    int A[M][N], B[N][O], C[M][O];

    cout << "Ingrese los elementos de la matriz A (" << M << "x" << N << "): "<<endl;
    for(i = 0; i < M; i++) 
	{
        for(j = 0; j < N; j++) 
		{
            cin >> A[i][j];
        }
    }

    cout << "Ingrese los elementos de la matriz B (" << N << "x" << O << "): "<<endl;
    for(i = 0; i < N; i++) 
	{
        for(j = 0; j < O; j++) 
		{
            cin >> B[i][j];
        }
    }

    for(i = 0; i < M; i++) 
	{
        for(j = 0; j < O; j++) 
		{
            C[i][j] = 0;
        }
    }

    // Multiplicación de matrices
    for(i = 0; i < M; i++) 
	{
        for(j = 0; j < O; j++) 
		{
            for(k = 0; k < N; k++) 
			{
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
            }
        }
    }

    cout << "Matriz resultante C (" << M << "x" << O << "):\n";
    for(i = 0; i < M; i++) 
	{
        for(j = 0; j < O; j++) 
		{
            cout << C[i][j] << " " <<endl;
        }
    }
    
    return 0;
}
