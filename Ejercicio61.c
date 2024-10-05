/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Escribe un programa que reciba un año y nos diga si es bisiesto o no */

#include <stdio.h>
// Metodo principal
int main(){
    int Anio;
    puts("Ingresa un año :");
    scanf("%d",&Anio);
    if(Anio%4 == 0){
        puts("ES BISIESTO");
    }
	 else{
        puts("ES ANIO NORMAL");
    }  
    return 0; 
}// Fin del metodo


