// Materia: Programacion 1, paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creacion: 13/03/2024
// Fecha modificacion: 13/03/2024
// Numero de ejercicio: 7
// Problema planteado:  Lee por teclado un año y calcula y muestra si es bisiesto

#include <iostream>

using namespace std;

// Función para determinar si un año es bisiesto
bool esBisiesto(int anio) {
    // Un año es bisiesto si es divisible por 4 y no es divisible por 100,
    // o si es divisible por 400
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int main() {
    int anio;
    cout << "year: ";
    cin >> anio;

    if (esBisiesto(anio)) {
        cout << anio << " this year is leap year" << endl;
    } else {
        cout << anio << " this year not is leap year." << endl;
    }
    system("pause");
    return 0;
}
