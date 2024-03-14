// Materia: Programacion 1, paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creacion: 13/03/2024
// Fecha modificacion: 13/03/2024
// Numero de ejercicio: 1
// Problema planteado: Escribe un programa que muestre por consola los números de 1 a 100 (ambos incluidos y con un salto de línea entre cada impresión), sustituyendo los siguientes.

#include <iostream>
#include <string>

using namespace std;


bool multipleof3  (int numero) {
    return numero % 3 == 0;
}


bool multipleof5  (int numero) {
    return numero % 5 == 0;
}

void imprimirFizzBuzz(int inicio, int fin) {

    for (int i = inicio; i <= fin; ++i) {

        if (multipleof3(i) && multipleof5(i)) {
            cout << "fizzbuzz" << endl;
        } else if (multipleof3 (i)) {
            cout << "fizz" << endl;
        } else if (multipleof5 (i)) {
            cout << "buzz"<< endl;
        } else {
            cout << i << endl;
        }
        
        cout << endl;
    }
}


int main() {
    imprimirFizzBuzz(1, 100);
    system ("pause");
    return 0;
}