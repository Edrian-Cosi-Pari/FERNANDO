#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
struct Persona 
{
    string nombre;
    int edad;
};

int main() 
{
    vector<Persona> personas;
    
    personas.push_back({"Ana", 25});
    personas.push_back({"Luis", 19});
    personas.push_back({"Carlos", 30});
    personas.push_back({"Maria", 22});

    // Ordenar por edad (de menor a mayor)
    sort(personas.begin(), personas.end(),
         [](Persona a, Persona b) {
             return a.edad < b.edad;
         });

    for (int i = 0; i < personas.size(); i++) {
        cout << personas[i].nombre << " - " << personas[i].edad << endl;
    }

    return 0;
}
