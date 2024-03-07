// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 4
// Problema planteado: Un arreglo contiene las edades de un grupo de 50 personas con números al azar, determine:
// el porcentaje de mayores (>=18 años) y menores de edad (<18 años).
//Las edades al azar deben ser generadas a partir de 1 a 110 años.

#include <iostream>
#include <vector>
#include <cstdlib> // Para rand y srand
#include <ctime>   // Para time

using namespace std;

int main() {
    srand(time(0)); // Inicializar la semilla para la generación de números aleatorios

    int Numero_de_Persona = 50; // Cantidad de personas
    vector<int> Edades_de_Personas(Numero_de_Persona); // Vector de edades

    // Generar edades aleatorias para las personas
    for (int i = 0; i < Numero_de_Persona; ++i) {
        Edades_de_Personas[i] = rand() % 100 + 1; // Edades entre 1 y 100
    }

    int Personas_Menores = 0;
    int Personas_Mayores = 0;

    // Calcular el número de personas mayores y menores de edad
    for (int i = 0; i < Numero_de_Persona; ++i) {
        if (Edades_de_Personas[i] >= 18) {
            Personas_Mayores++;
        } else {
            Personas_Menores++;
        }
    }

    double Porcentaje_Mayores = (static_cast<double>(Personas_Mayores) / Numero_de_Persona) * 100;
    double Porcentaje_Menores = (static_cast<double>(Personas_Menores) / Numero_de_Persona) * 100;

    cout << "Las personas mayores de edad son: " << Personas_Mayores << endl;
    cout << "Las personas menores de edad son: " << Personas_Menores << endl;
    cout << "Las personas  mayores de edad son el: " << Porcentaje_Mayores << "%" << endl;
    cout << "Las personas menores de edad son el : " << Porcentaje_Menores << "%" << endl;

    system("pause");

    return 0;
}
