// Materia: Programacion 1, paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creacion: 13/03/2024
// Fecha modificacion: 13/03/2024
// Numero de ejercicio: 9
/*  Problema planteado: . Leer los datos de doce personas como son: nombre, edad, estatura, peso,
posteriormente indicar cuál es el nombre de la persona de menor edad, el promedio de
las estaturas y el de los pesos. (realizar con vectores) */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definición de una función para leer los datos de una persona
void leerDatosPersona(string& nombre, int& edad, double& estatura, double& peso) {
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Edad: ";
    cin >> edad;
    cout << "Estatura (en metros): ";
    cin >> estatura;
    cout << "Peso (en kilogramos): ";
    cin >> peso;
    cout << endl;
}

// Definición de una función para encontrar la persona de menor edad
string personaMenorEdad(const vector<string>& nombres, const vector<int>& edades) {
    int edadMinima = edades[0];
    string nombreMenorEdad = nombres[0];
    for (int i = 1; i < nombres.size(); ++i) {
        if (edades[i] < edadMinima) {
            edadMinima = edades[i];
            nombreMenorEdad = nombres[i];
        }
    }
    return nombreMenorEdad;
}

// Definición de una función para calcular el promedio de un vector de valores
double promedio(const vector<double>& valores) {
    double suma = 0;
    for (double valor : valores) {
        suma += valor;
    }
    return suma / valores.size();
}

int main() {
    const int numPersonas = 12;
    vector<string> nombres(numPersonas);
    vector<int> edades(numPersonas);
    vector<double> estaturas(numPersonas);
    vector<double> pesos(numPersonas);

    // Leer los datos de las personas
    for (int i = 0; i < numPersonas; ++i) {
        cout << "Persona " << i + 1 << ":" << endl;
        leerDatosPersona(nombres[i], edades[i], estaturas[i], pesos[i]);
    }

    // Encontrar la persona de menor edad
    string nombreMenorEdad = personaMenorEdad(nombres, edades);
    cout << "La persona de menor edad es: " << nombreMenorEdad << endl;

    // Calcular el promedio de las estaturas
    double promedioEstaturas = promedio(estaturas);
    cout << "El promedio de las estaturas es: " << promedioEstaturas << " metros" << endl;

    // Calcular el promedio de los pesos
    double promedioPesos = promedio(pesos);
    cout << "El promedio de los pesos es: " << promedioPesos << " kilogramos" << endl;
    system("pause");
    return 0;
}
