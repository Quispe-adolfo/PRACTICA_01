// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 18
/* Problema planteado: Programa que declare un vector de diez elementos enteros y pida números para rellenarlo
hasta que se llene el vector o se introduzca un número negativo. Entonces se debe imprimir el
vector (sólo los elementos introducidos). */




#include <iostream> 
#include <vector>
#include <math.h>

using namespace std;

int main(){
    int valor, sum=0;
    vector <int> valores; // Vector vacio para un x numero de edades
    do{
        cout << "Ingrese los valores del 1 al 10: "; cin >> valor;
        if (valor>0){
            valores.push_back(valor);
            sum +=1;
        }
        else{   
            break; //verificamos si el dato es negativo
        }
        
    } while (sum <10 ) ; //verificamos el size del vector
    for (int i = 0; i<sum; i++){  
        cout << valores[i] << endl;
    }
    system("pause");
    return 0;
}