// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 17
/* Problema planteado: Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno
(comprendidas entre 0 y 100). A continuación, debe mostrar todas las notas, la nota media, la
nota más alta que ha sacado y la menor. */

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> notas;
    int nota;

    // Lectura de las notas

    cout << "Ingrese las 5 notas  por alumno (entre 0 y 100): " << endl;

    for (int i = 0; i < 5; i++) {
        int nota;
        cout << "Nota " << i + 1 << ": ";
        cin >> nota;

        //verificar que este dentro del rango
        while (nota < 0 || nota > 100) {
            cout << "La nota debe estar entre 0 y 100. Intente nuevamente: ";
            cin >> nota;
        }

        notas.push_back(nota);

    }

    // Mostrar todas las notas
    cout << "Todas las notas: ";
    for (int nota : notas) {
        cout << nota << " ";
    }
    cout << endl;

    // Calcular la nota media
    int sumaNotas = 0;
    for (int nota : notas) {
        sumaNotas += nota;
    }
    float notaMedia;
    
    notaMedia= (sumaNotas) / 5;

  // Encontrar la nota más alta y la menor
    
    int maxnota, minnota;
    
    maxnota = notas[0];
    minnota = notas[0];
    
    for (int i = 1; i < 5; ++i) {
        
        if (notas[i] > maxnota) {
            
            maxnota = notas[i];
        }
        
        if (notas[i] < minnota) {
            
            minnota = notas[i];
        }
    }
    
    // resultados
    cout << "La nota media es: " << notaMedia << endl;
    cout << "La nota más alta es: " << maxnota << endl;
    cout << "La nota más baja es: " << minnota << endl;
    
    system("pause");
    return 0;
}

