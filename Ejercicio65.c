/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Determina si un numero es primo (Un numero es primo si es divisible entre 1 y entre si mismo */
#include <stdio.h>
// Metodo principal
int main(){
    int Numero, Contador = 0;
    puts("Ingresa un numero:");
    scanf("%d",&Numero);
    for(int i = 1; i<=Numero; i++){
        if(Numero % i == 0){
            Contador++;
        }
    }
    if(Contador > 2){
        puts("No es primo");
    }
    else{
        puts("Es primo");
    }
    return 0;
}// Fin del metodo

