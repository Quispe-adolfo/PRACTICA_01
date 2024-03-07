// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 7
// Problema planteado: A partir de dos vectores constantes que contienen nombres de 7 personas cada uno.
//Escribir un programa que escriba la palabra “Iguales” si ambos vectores son iguales y
//“Diferentes” si no lo son. Serán iguales cuando en la misma posición de ambos vectores se
//tenga el mismo valor para todos los elementos.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    const vector<string> nombres1 = {"Adolfo", "Gizzela", "Pablo", "Ana", "Luisa", "Carlos", "Sofía"};
    const vector<string> nombres2 = {"Adolfo", "Gizzela", "Peblo", "Ana", "Luisa", "Carlos", "Sofía"};

    int estado = 1; // 1 representa "Iguales", 0 representa "Diferentes"

    // Verificar si ambos vectores son iguales
    if (nombres1.size() == nombres2.size()) {
        for (size_t i = 0; i < nombres1.size(); ++i) {
            if (nombres1[i] != nombres2[i]) {
                estado = 0;
                break;
            }
        }
    } else {
        estado = 0;
    }

    // Imprimir el resultado
    if (estado == 1) {
        cout << "Iguales" << endl;
    } else {
        cout << "Diferentes" << endl;
    }
    system("pause");
    return 0;
}
