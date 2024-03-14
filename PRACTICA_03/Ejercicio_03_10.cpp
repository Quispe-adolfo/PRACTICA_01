// Materia: Programacion 1, paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creacion: 13/03/2024
// Fecha modificacion: 13/03/2024
// Numero de ejercicio: 10
/* Problema planteado: Escribir el programa para solicitar al usuario N calificaciones comprendidas en el
rango de 1 a 100, calcular y presentar la sumatoria y promedio de estas N calificaciones.
La entrada de valores es para las calificaciones, debe hacerlo mediante una función
(realizar con vectores). */

#include <iostream>
#include <vector>

using namespace std;

// Función para leer las calificaciones del usuario
void leerCalificaciones(vector<int>& calificaciones, int N) {
    for (int i = 0; i < N; ++i) {
        int calificacion;
        cout << "Ingrese la calificación " << i + 1 << ": ";
        cin >> calificacion;
        // Verificar si la calificación está en el rango permitido
        if (calificacion < 1 || calificacion > 100) {
            cout << "La calificación debe estar en el rango de 1 a 100. Inténtelo de nuevo." << endl;
            --i; // Volver a solicitar la misma calificación
        } else {
            calificaciones.push_back(calificacion);
        }
    }
}

// Función para calcular la sumatoria de las calificaciones
int calcularSumatoria(const vector<int>& calificaciones) {
    int sumatoria = 0;
    for (int calificacion : calificaciones) {
        sumatoria += calificacion;
    }
    return sumatoria;
}

// Función para calcular el promedio de las calificaciones
double calcularPromedio(const vector<int>& calificaciones) {
    int sumatoria = calcularSumatoria(calificaciones);
    return static_cast<double>(sumatoria) / calificaciones.size();
}

int main() {
    int N;
    cout << "Ingrese el numero de calificaciones: ";
    cin >> N;

    vector<int> calificaciones;
    leerCalificaciones(calificaciones, N);

    // Calcular la sumatoria de las calificaciones
    int sumatoria = calcularSumatoria(calificaciones);
    cout << "La sumatoria de las calificaciones es: " << sumatoria << endl;

    // Calcular el promedio de las calificaciones
    double promedio = calcularPromedio(calificaciones);
    cout << "El promedio de las calificaciones es: " << promedio << endl;
    system("pause");
    return 0;
}
