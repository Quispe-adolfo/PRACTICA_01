// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 5
// Problema planteado: Un arreglo contiene las estaturas en cm de N personas (estatura al azar en un rango de 50 a
// 240, determinar la mayor estatura, la estatura más baja y el promedio de estaturas. 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int N;
    cout << "Ingrese la cantidad de personas: ";
    cin >> N;

    int estaturas[N];

    // Generar estaturas aleatorias
    for (int i = 0; i < N; i++) {
        estaturas[i] = rand() % (240 - 140 + 1) + 140; // Rango de 140 a 240
    }

    // para encontrar la mayor, menor y promedio en altura
    int maxEstatura = estaturas[0];
    int minEstatura = estaturas[0];
    int sumaEstaturas = estaturas[0];

    for (int i = 1; i < N; i++) {
        sumaEstaturas += estaturas[i];

        if (estaturas[i] > maxEstatura) {
            maxEstatura = estaturas[i];
        }

        if (estaturas[i] < minEstatura) {
            minEstatura = estaturas[i];
        }
    }

    // Calcular promedio
    float promedio = static_cast<float>(sumaEstaturas) / N;

    cout << "La estatura mas alta es: " << maxEstatura << " cm" << endl;
    cout << "La estatura mas baja es: " << minEstatura << " cm" << endl;
    cout << "El promedio de estaturas es: " << promedio << " cm" << endl;

    system("pause");

    return 0;
}
