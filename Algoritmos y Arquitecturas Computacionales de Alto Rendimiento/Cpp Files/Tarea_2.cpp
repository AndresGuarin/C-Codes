/*Este código devuelve el valor de mi nombre, edad y la suma de los digitos de mi código de estudiante*/
#include <iostream>
#include <string>

using namespace std;

int main(){

    /*Declarar variables*/
    int age = 18, id[7]={2,2,0,1,8,7,0}, suma;
    string name = "Juan Andres Guarin Rojas";
    
    /*Hallar la suma de los números del id*/
    suma=0;
    for(int i=0;i<7;i++){
        suma += id[i];
    }

    /*Imprimir resultados*/
    cout<<"Nombre "<<name<<" Edad: "<<age<<endl;
    cout<<"Suma de los numeros del codigo: "<<suma<<endl;
    return 0;
}