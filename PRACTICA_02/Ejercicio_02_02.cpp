// Materia: Programacion I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creacion: 06/03/2024
// Fecha modificacion: 06/03/2024
// Número de ejercicio: 2
// Problema planteado:  Escribir un programa que a partir de un arreglo constante de 10 elementos enteros,
//determine el porcentaje de números pares positivos e impares negativos.

#include <iostream>

using namespace std;

int main() 
{
    
    const int TamanioArreglo = 10;  // para poder definir el tamanio 

    int arreglo  [TamanioArreglo];

    cout << " ingrese 10 numeros enteros : ";

    for ( int i = 0;  i < TamanioArreglo;  ++i )  
    {
        cin >> arreglo [i] ;
    }

    float Pares = 0; 
    float Impares = 0; 

    for (int i = 0; i < TamanioArreglo; ++i) 
    {
        if  ( arreglo [i] > 0 &&  arreglo [i]  % 2 == 0) 
        {
            Pares++;
        } 

        else if ( arreglo [i] < 0 && arreglo[i] % 2 != 0) 
        {
            Impares++;
        }

    }

    // para calcular el porcentaje
    float porcentajePares = (Pares / TamanioArreglo) * 100;
    float porcentajesNegativo = (Impares / TamanioArreglo) * 100;  
   
    cout << "Porcentaje de numeros pares positivos: " << porcentajePares << "%" << endl;
    cout << "Porcentaje de numeros impares negativos: " << porcentajesNegativo << "%" << endl;

    system("pause");
    return 0;
}