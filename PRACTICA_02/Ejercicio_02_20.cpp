// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 20
/*  Problema planteado: Crea un programa que pida un número al usuario un número de mes (por ejemplo, el 4) y
diga cuántos días tiene (por ejemplo, 30) y el nombre del mes. Debes usar un vector. Para
simplificarlo vamos a suponer que febrero tiene 28 días. */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    // En este vector se acumularán los meses
    vector<string> meses = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};

    // Le pedirá al usuario que ingrese el día del mes que quiera
    int numeroMes;
    cout << "Ingrese el número del mes: ";
    cin >> numeroMes;

    // En el caso de poner un número diferente entre el 1 y el 12 (día de mes) se devolverá al inicio
    if (numeroMes < 1 || numeroMes > 12)  
    {
        cout << "No existe el número de mes que ingreso" << endl;
        return 1; // Indica al programa que se mando una respuesta incorrecta (ejemplo: poner un número 13)
    }

    // Se almacenarán la cantidad de días que tienen cada mes en orden (Enero-Diciembre)
    vector<int> numeroDias = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Para generar la cantidad de días y el nombre del mes correspondiente
    int dias = numeroDias [numeroMes - 1];
    string nombreMes = meses [numeroMes - 1];

    cout << "El número que ingreso es de " << nombreMes << " y tiene " << dias << " días." << endl;
    system("pause");
    return 0;
}