// Materia: Programacion 1, paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creacion: 13/03/2024
// Fecha modificacion: 13/03/2024
// Numero de ejercicio: 4
/* Problema planteado: Crea una única función (importante que sólo sea una) que sea capaz de calcular y
retornar el área de un polígono.
- La función recibirá por parámetro sólo UN polígono a la vez.
- Los polígonos soportados serán Triángulo, Cuadrado y Rectángulo.
- Imprime el cálculo del área de un polígono de cada tipo. */

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Constantes para representar los tipos de polígonos
const int TRIANGULO = 1;
const int CUADRADO = 2;
const int RECTANGULO = 3;

// Función para calcular y retornar el área de un polígono
double calcularAreaPoligono(int tipo, double lado1, double lado2 = 0) {
    switch (tipo) {
        case TRIANGULO:
            return lado1 * lado2 / 2.0;
        case CUADRADO:
            return lado1 * lado1;
        case RECTANGULO:
            return lado1 * lado2;
        default:
            cout << "Poligono no soportado." << endl;
            return 0;
    }
}

int main() {
    // Ejemplos de uso de la función
    double base, altura;

    // Calcular el área de un triángulo
    base = 5.0;
    altura = 8.0;
    cout << "Area de un triangulo con base " << base << " y altura " << altura << ": ";
    cout << calcularAreaPoligono(TRIANGULO, base, altura) << endl;

    // Calcular el área de un cuadrado
    double lado = 4.0;
    cout << "Area de un cuadrado con lado " << lado << ": ";
    cout << calcularAreaPoligono(CUADRADO, lado) << endl;

    // Calcular el área de un rectángulo
    base = 6.0;
    altura = 10.0;
    cout << "Area de un rectangulo con base " << base << " y altura " << altura << ": ";
    cout << calcularAreaPoligono(RECTANGULO, base, altura) << endl;

    system("pause");
    return 0;
}
