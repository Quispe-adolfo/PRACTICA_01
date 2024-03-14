// Materia: Programacion 1, paralelo 1
// Autor: Luis Adolfo Quispe Huacani
// Fecha creacion: 13/03/2024
// Fecha modificacion: 13/03/2024
// Numero de ejercicio: 8
// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad.
#include <iostream>

using namespace std;

// Función para calcular la edad
int calcularEdad(int anioActual, int mesActual, int diaActual, int anioNacimiento, int mesNacimiento, int diaNacimiento) {
    int edad = anioActual - anioNacimiento;
    
    // Verificar si todavía no ha cumplido años en el año actual
    if (mesActual < mesNacimiento || (mesActual == mesNacimiento && diaActual < diaNacimiento)) {
        edad--;
    }
    
    return edad;
}

int main() {
    int anioActual, mesActual, diaActual;
    cout << "Ingrese la fecha actual (anio mes dia): ";
    cin >> anioActual >> mesActual >> diaActual;

    int anioNacimiento, mesNacimiento, diaNacimiento;
    cout << "Ingrese la fecha de nacimiento (anio mes dia): ";
    cin >> anioNacimiento >> mesNacimiento >> diaNacimiento;

    int edad = calcularEdad(anioActual, mesActual, diaActual, anioNacimiento, mesNacimiento, diaNacimiento);
    cout << "La edad es: " << edad << " anios." << endl;
    system("pause");
    return 0;
}
