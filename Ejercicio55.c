/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Calcular el mayor de dos numeros leidos del teclado y visualizarlos en pantalla. */

#include <stdio.h>
// Metodo principal
int main(){
    int Numero1, Numero2;
    puts("Ingresa el numero 1:");
    scanf("%d",&Numero1);
    puts("Ingresa el numero 2:");
    scanf("%d",&Numero2);
    if(Numero1 > Numero2){
        printf("El numero mayor es: %d\n",Numero1);
    }else if(Numero1 == Numero2){
	     puts("Los numeros son iguales");
	 }
	 else{
        printf("El numero mayor es: %d\n",Numero2);
    }
}

