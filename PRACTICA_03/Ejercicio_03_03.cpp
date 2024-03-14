// Materia: Programacion 1, paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creacion: 13/03/2024
// Fecha modificacion: 13/03/2024
// Numero de ejercicio: 3
/* Problema planteado:  Escribe un programa que se encargue de comprobar si un número es o no primo. Hecho
esto, imprime los números primos entre 1 y 100.*/

#include <iostream>

using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Verificar e imprimir los números primos entre 1 y 100
    cout << "Numeros primos entre 1 y 100:" << endl;
    for (int i = 1; i <= 100; ++i) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    system("pause");
    
    return 0;
}
