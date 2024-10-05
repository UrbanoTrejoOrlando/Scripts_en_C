/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  23-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Convertir de grados Celcius a Fahrenheit */
#include <stdio.h>

int main(){
    float Grados, Farenheit, Conversion = 0;
	 puts("Ingresa los grados a convertir: ");
	 scanf("%f",Grados);
	 Conversion = (Grados * 1.8)+ 32;
	 printf("Conversion: %.2f\n",Conversion);
	 return 0;
}
