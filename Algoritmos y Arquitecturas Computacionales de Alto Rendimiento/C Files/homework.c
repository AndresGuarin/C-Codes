/*Este código devuelve el valor de mi nombre, edad y la suma de los digitos de mi código de estudiante*/
#include <stdio.h>

int main(void){

    /*Declarar variables*/
    int age = 18, id[]={2,2,0,1,8,7,0}, suma;
    char *name = "Juan Andres Guarin Rojas";
    
    /*Hallar la suma de los números del id*/
    suma=0;
    for(int i=0;i<7;i++){
        suma += id[i];
    }

    /*Imprimir resultados*/
    printf("Nombre: %s \t Edad: %d \n",name, age);
    printf("Suma de los numeros del codigo: %d \n",suma);
    return 0;
}