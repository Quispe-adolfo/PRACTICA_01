// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 21
/*  Problema planteado: Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada
uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    // Declarar tres vectores de enteros
    vector<int> vector1(5);
    vector<int> vector2(5);
    vector<int> vector3(5);

    // Pedir valores para vector1
    cout << "Ingrese 5 valores enteros para el vector1: ";
    for (int i = 0; i < 5; ++i) {
        cin >> vector1[i];
    }

    // Pedir valores para vector2
    cout << "Ingrese 5 valores enteros para el vector2: ";
    for (int i = 0; i < 5; ++i) {
        cin >> vector2[i];
    }

    // Calcular vector3 = vector1 + vector2
    for (int i = 0; i < 5; ++i) {
        vector3[i] = vector1[i] + vector2[i];
    }

    // Mostrar el resultado en vector3
    cout << "El vector3 resultante es: ";
    for (int i = 0; i < 5; ++i) {
        cout << vector3[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}