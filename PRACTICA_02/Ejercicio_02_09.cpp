// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 9
/* Problema planteado: Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otro
arreglo contiene los nombres de los mismos y un tercer arreglo contiene la sigla de la carrera.
Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el
nombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo un
desempeño mayor con relación al promedio del curso. */


#include <iostream>
#include <string>

using namespace std;

int main() 
{
    // Definir calificaciones, nombres y siglas 
    int calificaciones[] = {85, 90, 75, 95, 80};
    string Nombres[] = {"Adolfo", "Juan", "Pablo", "clara", "Gary"};
    string Carreras[] = {"ING", "ADM", "ING", "ADM", "ING"};

    string Alubno_Mayor, Alubno_Menor;
    // Variables para almacenar las calificaciones mayor y menor
    int Calificacion_Mayor = -1, Calificacion_Menor = 101;
    
    double promedio = 0;
    string mejorCarrera;
    int sumaCalificaciones = 0;
    int contadorING = 0, contadorADM = 0;
    double promedioING, promedioADM;

    // Recorrer calificaciones para encontrar la nota mayor y menor
    for (int i = 0; i < 5; i++) {
        if (calificaciones[i] > Calificacion_Mayor) {
            Calificacion_Mayor = calificaciones[i];
            Alubno_Mayor = Nombres[i];
        }
        if (calificaciones[i] < Calificacion_Menor) {
            Calificacion_Menor = calificaciones[i];
            Alubno_Menor = Nombres[i];
        }
        // Calcular la suma de todas las calificaciones
        sumaCalificaciones += calificaciones[i];
    }

    promedio = sumaCalificaciones / 5.0; //promedio de calificaciones

    // Recorrer el arreglo de carreras para contar cuántos estudiantes hay en cada carrera
    for (int i = 0; i < 5; i++) {

        if (Carreras[i] == "ING") {
            contadorING++;
        } else if (Carreras[i] == "ADM") {
            contadorADM++;
        }

    }

    promedioING = sumaCalificaciones / static_cast<double>(contadorING);
    promedioADM = sumaCalificaciones / static_cast<double>(contadorADM);

    // Determinar la carrera con mejor notas
    if (promedioING > promedioADM) {

        mejorCarrera = "ING";

    } else {
        
        mejorCarrera = "ADM";
   
    }

    cout << "El alumno con la nota mas alta es: " << Alubno_Mayor << endl;
    cout << "El alumno con la nota mas baja es: " << Alubno_Menor << endl;
    cout << "La carrera con mejor aprovechamiento  es: " << mejorCarrera << endl;
     
    system("pause");

    return 0;
}