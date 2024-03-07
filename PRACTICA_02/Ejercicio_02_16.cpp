// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 16
/*  Problema planteado: Crear un vector de 5 elementos de cadenas de caracteres, inicializa el vector con datos
leídos por el teclado. Copia los elementos del vector en otro vector pero en orden inverso, y
muéstralo por la pantalla. */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    const int Tamano_Vector = 5; //Declaramos las  variables 
    vector <string>

    Vector_Original(Tamano_Vector);

    for (int i = 0; i < Tamano_Vector; ++i)
    {

        cout <<"Ingrese la cadena " << i + 1 << ": ";
        cin >> Vector_Original[i];

    }

    vector<string> vectorInverso (Vector_Original.rbegin(), Vector_Original.rend());

    cout << "El vector inverso es:" << endl;

    for (const auto& elemento : vectorInverso) 
    {

        cout << elemento << endl;

    }

    system("pause");

    return 0;
    

}