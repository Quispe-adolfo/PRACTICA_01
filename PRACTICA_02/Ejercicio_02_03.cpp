// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 3
// Problema planteado: - Escribir un programa que genere un arreglo de 50 posiciones con números al azar en el
//rango de A - B y determine cuántos de estos elementos son números primos.


#include <iostream>
#include<vector>
#include <cstdlib>    //manipulacion de archivos desde el programa, tanto leer como escribir en ellos.
#include <ctime>        //para controlar el time

using namespace std;

bool esPrimo(int Numero)
{
    if (Numero <= 1) 
    {
        return false;
    }

    for (int i = 2; i * i <= Numero; i++) 
        {
            if (Numero % i == 0) 
            {
                return false;
            }
        }
        return true;
}

int main()
{
    srand ( time(nullptr)) ;  //semilla para generar los numerlos aleatorios

    int A = 1;  //Denominamos rango inferior
    int B = 100;  // Determinamos rango superior
    int count_Primos = 0;

    vector <int> numeros(50);

    for (int i = 0; i < 50; i++) 
    {
        numeros[i] = A + rand() % (B - A + 1);
        if (esPrimo(numeros[i])) 
        {
            count_Primos++;
        }
    }

    cout << "Los elelementos existentes  en el arreglo: "; 
    for (int i = 0; i < 50; i++) 
    {
        cout << numeros[i] << " ";
    }
    cout << endl;
    cout << count_Primos << " son numeros primos." << endl;

    system("pause");

    return 0;

}