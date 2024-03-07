// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 14
/* Problema planteado:  Un arreglo contiene números al azar entre N y M, crear un segundo arreglo que contenga 
los números capicúa contenidos en el primero. */

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, M;

    cout << "Ingrese el valor entre  N y M: ";
    cin >> N >> M;

    vector<int> capicuas;

    // Llenar el vector capicuas con números capicuas entre N y M

    for (int num = N; num <= M; ++num) {

        int original = num;
        int inverso = 0;
        int temp = num;

        while (temp > 0) {
            inverso = inverso * 10 + temp % 10;
            temp /= 10;
        }
        if (original == inverso) {
            capicuas.push_back(num);
        }

    }

    // Para imprimir los numeros capicuas

    cout << "Numeros capicuas encontrados en el rango [" << N << ", " << M << "]:" << endl;

    for (int capicua : capicuas) {

        cout << capicua << " ";

    }
    cout << endl;
     
    system("pause");

    return 0;

}