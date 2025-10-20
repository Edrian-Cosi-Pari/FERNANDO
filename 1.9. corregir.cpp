#include <iostream>
#include <string>   // Para manejar cadenas

using namespace std;

//Funci�n que verifica si una palabra es pal�ndromo ---
bool esPalindromo(string palabra) {
    int i = 0;
    int j = palabra.length() - 1;

    while (i < j) {
        if (palabra[i] != palabra[j]) {
            return false;  // Si hay una diferencia, no es pal�ndromo
        }
        i++;
        j--;
    }
    return true;  // Si termin� el bucle sin diferencias, s� es pal�ndromo
}

int main() {
    string palabra;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    if (esPalindromo(palabra))
        cout << "La palabra ES un palindromo." << endl;
    else
        cout << "La palabra NO es un palindromo." << endl;

    return 0;
}

