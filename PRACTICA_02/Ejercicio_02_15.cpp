// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 15
/*  Problema planteado: Realizar un programa que defina un vector de 10 enteros, a continuación lo inicialice con
valores aleatorios (del 1 al 10) y posteriormente muestre en pantalla cada elemento del vector
junto con su cuadrado y su cubo. */

#include <iostream> 
#include <vector>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    int valor, sum=0, cuadrado, cubo;
    vector <int> valores;

    do{
        cout << "Ingresar  valores de 1 al 10: "; cin >> valor;

        if (valor <11 && valor>0){

            valores.push_back(valor);
            sum +=1;

        }

    } while (sum <10);       //verificamos el size del vector

    cout << "Elemento  " << "Cuadrado  " << "Cubo" << endl;

    for (int i = 0; i<10; i++){

        cuadrado = pow(valores[i], 2);
        cubo = pow(valores[i], 3);
        cout << valores[i] << "  " << cuadrado << "  " << cubo << endl;

    }

    system("pause");
    
    return 0;
}