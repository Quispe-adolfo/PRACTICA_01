// Materia: Programacion 1, paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creacion: 13/03/2024
// Fecha modificacion: 13/03/2024
// Numero de ejercicio: 6
/* Problema planteado:  Crea un programa que cuente cuantas veces se repite cada palabra y que muestre el
recuento final de todas ellas.
- Los signos de puntuación no forman parte de la palabra.
- Una palabra es la misma, aunque aparezca en mayúsculas y minúsculas.
- No se pueden utilizar funciones propias del lenguaje que lo resuelvan automáticamente.
*/

#include <iostream>
#include <string>
#include <map>
#include <cctype> // Para las funciones de manipulación de caracteres

using namespace std;

// Función para convertir una palabra a minúsculas
string aMinusculas(const string& palabra) {
    string palabraMinusculas = "";
    for (char c : palabra) {
        palabraMinusculas += tolower(c);
    }
    return palabraMinusculas;
}

int main() {
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);

    // Diccionario para almacenar las palabras y su recuento
    map<string, int> recuentoPalabras;

    // Variables para procesar el texto
    string palabraActual = "";
    bool dentroDePalabra = false;

    // Recorrer el texto caracter por caracter
    for (char c : texto) {
        if (isalpha(c)) { // Si el caracter es una letra
            palabraActual += c; // Agregar el caracter a la palabra actual
            dentroDePalabra = true;
        } else if (dentroDePalabra) { // Si estamos dentro de una palabra pero encontramos un delimitador
            // Convertir la palabra a minúsculas
            string palabraMinusculas = aMinusculas(palabraActual);
            // Incrementar el recuento de la palabra en el diccionario
            recuentoPalabras[palabraMinusculas]++;
            // Limpiar la palabra actual para la siguiente palabra
            palabraActual = "";
            dentroDePalabra = false;
        }
    }

    // Procesar la última palabra si estamos dentro de una palabra al final del texto
    if (dentroDePalabra) {
        // Convertir la última palabra a minúsculas
        string palabraMinusculas = aMinusculas(palabraActual);
        // Incrementar el recuento de la última palabra en el diccionario
        recuentoPalabras[palabraMinusculas]++;
    }

    // Mostrar el recuento final de todas las palabras
    cout << "Recuento final de palabras:" << endl;
    for (const auto& par : recuentoPalabras) {
        cout << par.first << ": " << par.second << endl;
    }
    system("pause");
    return 0;
}
