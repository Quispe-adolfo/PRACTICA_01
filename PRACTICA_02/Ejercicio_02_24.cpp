// Materia: Programación I, Paralelo 4
// Autor: Luis Adolfo Quispe Huacani
// Fecha creación: 06/03/2024
// Fecha modificación: 06/03/2024
// Número de ejercicio: 24
// Problema planteado: Leer una cadena en mayúsculas y cámbielas en minúscula.

# include <iostream>
# include <string>
using namespace std;
int main()
{
    string cadena; //char para variales tipo caracter
    cout<<"Ingrese un texto: ";

    cin >> cadena;
    cout<<cadena<<endl;

    while(true)
    { 
        bool mayuscula = true; //BANDERA PARA SABER SI ES MAYUSCULAS
        for(int i=0;i<cadena.length();i++)//ITERA TODA LA CADENA
        {
            if('A'<=cadena[i] && cadena[i]<='Z')    
            {
                mayuscula = false;
                break;
            }
        }

        if(mayuscula)
            break;
        else
        {
            cout<<"Intente de nuevo"<<endl;
            cin >> cadena;
        }

    }

    for(int i=0;i<cadena.length();i++)
    {
        cadena[i]+=32;
    }

    cout<<"En solo minusculas es: "<<cadena<<endl;
    
    system("pause");
    return 0;
}

