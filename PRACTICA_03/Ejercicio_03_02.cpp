// Materia: Programacion 1, paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creacion: 13/03/2024
// Fecha modificacion: 13/03/2024
// Numero de ejercicio: 2
/* Problema planteado: 2. Escribe una función que reciba dos palabras (String) y retorne verdadero o falso (Bool)
según sean o no anagramas.
- Un Anagrama consiste en formar una palabra reordenando TODAS las letras de otra
palabra inicial.
- NO hace falta comprobar que ambas palabras existan.
- Dos palabras exactamente iguales no son anagrama. */

#include <iostream>
#include <string>

using namespace std;

// Función para verificar si dos palabras son anagramas
bool sonAnagramas(const string& palabra1, const string& palabra2) {
    // Verificar si las palabras tienen la misma longitud
    if (palabra1.length() != palabra2.length()) {
        return false;
    }

    // Contadores para las frecuencias de las letras en ambas palabras
    int contador1[26] = {0}; // Suponemos que solo hay letras minúsculas
    int contador2[26] = {0};

    // Incrementar los contadores según las letras en la primera palabra
    for (char letra : palabra1) {
        contador1[letra - 'a']++;
    }

    // Decrementar los contadores según las letras en la segunda palabra
    for (char letra : palabra2) {
        contador2[letra - 'a']++;
    }

    // Verificar si los contadores son iguales
    for (int i = 0; i < 26; ++i) {
        if (contador1[i] != contador2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    // Ejemplo de uso de la función
    string palabra1, palabra2;
    cout << "Ingrese la primera palabra: ";
    cin >> palabra1;
    cout << "Ingrese la segunda palabra: ";
    cin >> palabra2;

    // Llamar a la función y mostrar el resultado
    if (sonAnagramas(palabra1, palabra2)) {
        cout << "Las palabras son anagramas." << endl;
    } else {
        cout << "Las palabras no son anagramas." << endl;
    }

    system("pause");
    return 0;
}


