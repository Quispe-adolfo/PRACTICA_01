// Materia: Programacion 1, paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creacion: 13/03/2024
// Fecha modificacion: 13/03/2024
// Numero de ejercicio: 11
/* Problema planteado: Elabore un programa para registro académico de la UCB, que solicite el nombre de
una materia, el paralelo, el docente y sus correspondientes notas de periodo. Al final, se
muestra la nota final y si aprobó o reprobó el curso (realizar con vectores).*/
#include <iostream>
#include <vector>

using namespace std;

// Estructura para almacenar la información de una materia
struct Materia {
    string nombre;
    string paralelo;
    string docente;
    vector<double> notasPeriodo;
};

// Función para leer las notas de periodo de una materia
void leerNotasPeriodo(Materia& materia, int numNotas) {
    for (int i = 0; i < numNotas; ++i) {
        double nota;
        cout << "Ingrese la nota del periodo " << i + 1 << ": ";
        cin >> nota;
        materia.notasPeriodo.push_back(nota);
    }
}

// Función para calcular la nota final de una materia
double calcularNotaFinal(const Materia& materia) {
    double sumaNotas = 0;
    for (double nota : materia.notasPeriodo) {
        sumaNotas += nota;
    }
    return sumaNotas / materia.notasPeriodo.size();
}

// Función para determinar si el estudiante aprobó o reprobó una materia
string determinarEstadoCurso(double notaFinal) {
    return notaFinal >= 51 ? "Aprobado" : "Reprobado";
}

int main() {
    Materia materia;

    cout << "Ingrese el nombre de la materia: ";
    getline(cin, materia.nombre);

    cout << "Ingrese el paralelo: ";
    getline(cin, materia.paralelo);

    cout << "Ingrese el nombre del docente: ";
    getline(cin, materia.docente);

    int numNotas;
    cout << "Ingrese el numero de notas de periodo: ";
    cin >> numNotas;

    leerNotasPeriodo(materia, numNotas);

    // Calcular la nota final
    double notaFinal = calcularNotaFinal(materia);
    cout << "La nota final de la materia " << materia.nombre << " es: " << notaFinal << endl;

    // Determinar si el estudiante aprobó o reprobó el curso
    string estadoCurso = determinarEstadoCurso(notaFinal);
    cout << "El estudiante ha " << estadoCurso << " la materia." << endl;
    system("pause");
    return 0;
}
