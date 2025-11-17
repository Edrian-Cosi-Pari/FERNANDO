#include <bits/stdc++.h>
using namespace std;

bool estaBalanceada(const string &cad) 
{
    stack<char> pila;

    for (int i = 0; i < cad.size(); i++) 
	{
        char c = cad[i];

        if (c == '(' || c == '[' || c == '{') 
		{
            pila.push(c);
        }
        else if (c == ')' || c == ']' || c == '}') 
		{
            if (pila.empty()) 
			{
                return false;
            }

            char tope = pila.top();
            if ((c == ')' && tope != '(') || (c == ']' && tope != '[') || (c == '}' && tope != '{')) 
			{
                return false;
            }

            pila.pop();
        }
    }

    return pila.empty();
}

int main() 
{
    string cadena;

    cout << "Ingresa la cadena de parentesis: ";
    cin >> cadena;

    if (estaBalanceada(cadena)) 
	{
        cout << "La expresion SI esta balanceada." << endl;
    } else {
        cout << "La expresion NO esta balanceada." << endl;
    }

    return 0;
}
