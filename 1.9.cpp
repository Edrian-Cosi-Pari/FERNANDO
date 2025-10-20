#include <bits/stdc++.h>

using namespace std;

//Funci�n que verifica si una palabra es pal�ndromo
bool esPalindromo(string palabra) 
{
    int i = 0;
    int j = palabra.length() - 1;

    while (i < j)
	{
        if (palabra[i] != palabra[j]) 
		{ 
			return false;
        }
        i++;
        j--;
    }
    
	return true;
}

int main() 
{
    string palabra;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    if (esPalindromo(palabra))
    {
    	cout << "La palabra ES un palindromo." << endl;
	}
    else
    {
    	cout << "La palabra NO es un palindromo." << endl;
	}

    return 0;
}
