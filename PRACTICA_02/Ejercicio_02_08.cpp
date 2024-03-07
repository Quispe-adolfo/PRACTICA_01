// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 8
/* Problema planteado: 
 Se tiene el arreglo
    Ventas:
    (ventas desde enero hasta diciembre)
    Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que
    contiene los nombres de los meses:
    Meses:
   (meses desde enero hasta diciembre)
    Escriba un programa que obtenga:
    • ¿En qué mes(es) se dieron las ventas máximas de la empresa?
    • ¿A cuánto ascendieron las ventas máximas?
    • ¿Cuál fue el total de las ventas?
    Las ventas deben ser ingresadas por teclado. */

# include <iostream>
# include <string>
# include <vector>

using namespace std;

int main ()
{
    vector<string> Meses = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    vector<double> Ventas(12);

    int posicion;
    double mayorVenta=0.0, ventamaxima=0.0
    ;
    for(int i=0;i<12;i++)
    {
        cout<<"Ingrese las ventas del mes de "<<Meses[i]<<": ";
        cin>>Ventas[i];
        if(Ventas[i]>mayorVenta) //Obtiene el mes y cuanto fue la mayor venta
        {
            posicion=i;
            mayorVenta=Ventas[i];
        }
        ventamaxima += Ventas[i];
    }

    cout<<"El mes de mayor venta fue: "<<Meses[posicion]<<endl;
    cout<<"La venta maxima fue de: "<<mayorVenta<<endl;
    cout <<"El total de ventas fue: "<<ventamaxima<<endl;
    
    system("pause");

    return 0;
}
