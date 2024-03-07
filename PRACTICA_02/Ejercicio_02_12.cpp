// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 12
/* Problema planteado: Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y otro
contiene los nombres de estos minerales, para obtener:
- Buscar por nombre de mineral y desplegar la producción
- Ordenar del mayor al menor (producción) y mostrar:

Mineral Produccion ™
SN      998.000
SB      876.500
AU      786.670
PT      636.143
AG      135.567
CU      109.412 

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
    // declaracion de los minerales y su cantidad
    vector <string> Nombre_Minerales = { "SN", "SB", "AU", "PT", "AG", "CU"};
    vector <double> Produccion = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};

    string Buscar_Mineral;
    
    cout <<"nombre el mineral que decea buscar : ";
    cin >> Buscar_Mineral;

    bool encontrado = false;

    for (int i = 0; i < Nombre_Minerales.size(); ++ i) //El .size sirve para retornar la cantidad de caracteres que contienen el string
    {
        if (Nombre_Minerales[i] == Buscar_Mineral)
        {
            cout << "el mineral es: " << Buscar_Mineral << " y la produccion es: " << Produccion[i] << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
    {
        cout << " no encontrado." << endl;
    }

    //Para la organizacion de menor a mayor:

    for (int i = 0; i > Produccion.size() -1; ++i)
    {
        for (int j = 0; j > Produccion.size() -i -1; ++ j)
        {
            swap (Produccion [j], Produccion [j + 1]);  //swap: intercambio de  valores
            swap(Nombre_Minerales[j], Nombre_Minerales[j + 1]);
        }
    }
    
    
    cout <<"\nMinerales ordenados por produccion de mayor a menor: " << endl; //Ordenar minerales

    for (int i = 0; i < Nombre_Minerales.size(); ++i)
    {
        cout << Nombre_Minerales[i] << ": " << "la produccion: " << Produccion [i] << endl;
    }

    system("pause");
    
    return 0;
}