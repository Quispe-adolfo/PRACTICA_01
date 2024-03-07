// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio:11
/* Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de
este arreglo determine la desviación típica. */

#include <iostream> 
#include <vector>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    int edad, N=0, x=0;
    float media, total=0, desviacion;

    vector <int> edades; // Vector vacio para un x numero de edades

    do{
        cout << "\nIngrese la edad: ";  // Ingresamos datos hasta ingresar un -1
        cin >> edad; 

        if (edad != -1) {  
            edades.push_back(edad);
            N++;}

    } while (edad!=-1);

    for (int i =0; i <N; i++){   
        x += edades[i];
    }

    media = x/N;

    for (int i =0; i <N; i++){                           // resultado final
        total += pow(edades[i]-media, 2);
    }

    desviacion = sqrt(total/N);
    cout << "La desviacion tipica es de "<< fixed << setprecision(2) << desviacion << endl;
    
    system("pause"); 
    
    return 0;
}