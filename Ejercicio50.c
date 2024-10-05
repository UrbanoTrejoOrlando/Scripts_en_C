/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Escribir una palabra y ver cuantos mide la cadena */

#include <stdio.h>
#include <string.h>

int main(){
    char Palabra[15];
	 int Cadena;
	 puts("Ingresa un palabra: ");
	 scanf("%s",&Palabra);
	 Cadena = strlen(Palabra);
	 printf("La cadena %s mide: %d\n",Palabra, Cadena);
}
