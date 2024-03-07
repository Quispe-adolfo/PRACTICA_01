// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 6
// Problema planteado:  Dados dos arreglos constantes de igual tamaño, generar un tercer arreglo con los elementos intercalados


#include <iostream>
#include <vector>

using namespace std;

int main() {
    int Tamanio;
    cout << "Introduzca el tamaño que tendrán ambos vectores: ";
    cin >> Tamanio;

    vector<int> Vector1(Tamanio);
    vector<int> Vector2(Tamanio);
    vector<int> Vector3;

    // Introducir valores en el primer vector
    cout << "Introduzca los valores del primer vector: ";
    for (int i = 0; i < Tamanio; ++i) {
        cin >> Vector1[i];
    }

    // Introducir valores en el segundo vector
    cout << "Introduzca los valores del segundo vector: ";
    for (int i = 0; i < Tamanio; ++i) {
        cin >> Vector2[i];
    }

    // Intercalar valores de los dos vectores en el tercer vector
    for (int i = 0; i < Tamanio; ++i) {
        Vector3.push_back(Vector1[i]);
        Vector3.push_back(Vector2[i]);
    }

    // Para mostrar  el vector intercalado
    cout << "El vector intercalado es: ";
    for (int i = 0; i < Vector3.size(); ++i) {
        if (i < Vector3.size() - 1) {
            cout << Vector3[i] << " - ";
        } else {
            cout << Vector3[i];
        }
    }

    cout << endl;

    system("pause");

    return 0;
}
