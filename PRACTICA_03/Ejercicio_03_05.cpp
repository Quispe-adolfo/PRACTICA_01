// Materia: Programacion 1, paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creacion: 13/03/2024
// Fecha modificacion: 13/03/2024
// Numero de ejercicio: 5
/* Problema planteado: Crea un programa que invierta el orden de una cadena de texto sin usar funciones
propias del lenguaje que lo hagan de forma automática.
- Si le pasamos "Hola mundo" nos retornaría "odnum aloH" */

#include <iostream>
#include <string>

using namespace std;

// Función para invertir una cadena de texto
string invertirCadena(const string& texto) {
    int longitud = texto.length();
    string textoInvertido = "";

    // Iterar desde el final hasta el inicio de la cadena de texto
    for (int i = longitud - 1; i >= 0; --i) {
        textoInvertido += texto[i]; // Construir el texto invertido letra por letra
    }

    return textoInvertido;
}

int main() {
    string texto;
    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);

    string textoInvertido = invertirCadena(texto);

    cout << "Texto invertido: " << textoInvertido << endl;

    system("pause");
    return 0;
}
