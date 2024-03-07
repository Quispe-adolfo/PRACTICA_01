// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 22
// Problema planteado: Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector.

#include <iostream>
#include <vector>

using namespace std;
int main() {
    
    int Tamanio;
    cout << "Introduzca el tamanio que tendran ambos vectores: ";
    cin >> Tamanio;

    int Vector1[Tamanio];
    int Vector2[Tamanio];
    int Multiplicados[2 * Tamanio];
    //creamos los vectores

    
    for (int i = 0; i < Tamanio; ++i) {
        cout << "Introduzca el valor " << i + 1  << " del primer vector: ";
        cin >> Vector1[i];
    }

    for (int i = 0; i < Tamanio; ++i) {
        cout << "Introduzca el valor " << i + 1  << " del segundo vector: ";
        cin >> Vector2[i];
    }
    // Introducimos los valores de los dos vectores

    for (int i = 0; i < Tamanio; ++i) {
        Multiplicados[i] = Vector1[i] * Vector2[i];
    }
    //Multiplicamos los valores de ambos vectores

    cout << "El vector con las multiplicaciones es: " << endl;
    for (int i = 0; i < Tamanio; ++i) {
        if (i < (Tamanio - 1))
        {
            cout << Multiplicados[i] << " - ";
        }
        else{
            cout << Multiplicados[i];
        }
    }
    system("pause");
    return 0;
}