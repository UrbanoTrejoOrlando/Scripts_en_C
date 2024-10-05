/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Ingresa un numero, calcula e imprime su raiz cuadrada, si el numero es negativo imprimir un mensaje que diga "Tiene raiz imaginaria" */

#include <stdio.h>
#include <math.h>
// Metodo principal
int main(){
    float Numero, Resultado;
    puts("Ingresa un numero:");
    scanf("%f",&Numero);
    if(Numero > 0){
        Resultado = sqrt(Numero);
        printf("La raiz cuadrada es: %.2f\n",Resultado);
    }
	 else{
        puts("Es una raiz imaginario");

    }
    return 0;
}// Fin del metodo

