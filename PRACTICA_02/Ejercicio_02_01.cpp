// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 1
// Problema planteado:   Almacenar un vector de tamanio N, con numeros al azar entre A y B, e imprima la suma de los componentes de indice par 
//y a la resta de los componentes de indice impar.

#include <iostream>
#include <vector>
#include <cmath>        

using namespace std;

int main() {

    int N, A, B; 

    cout << "Ingrese la dimencion  del vector: ";
    cin >> N;

    cout << "Ingrese el valor de A: ";
    cin >> A;

    cout << "Ingrese el valor de B: ";
    cin >> B;

    
    srand(time(nullptr));  // comandos para generar numeros aleatorios.

    
    vector<int> numeros(N);

    for (int i = 0; i < N; ++i) {

        numeros[i] = rand() % (B - A + 1) + A; // rand() generara un numero aleatorio entre A y B

    }

    int sumaPares = 0;
    int restaImpares = 0;
    
    //realizara una suma entre valores pares y una resta entre valores impares

    for (int i = 0; i < N; ++i) {

        if (i % 2 == 0) {
            sumaPares += numeros[i];
        } else {
            restaImpares -= numeros[i];
        }

    }

    cout << "La suma de los componentes de indice par es: " << sumaPares << endl;
    cout << "La resta de los componentes de indice impar es: " << restaImpares << endl;
    system("pause");
    return 0;
}
