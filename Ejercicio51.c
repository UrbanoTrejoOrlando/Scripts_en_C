 /* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Convierte a mayuscula cualquier cadena de texto */

#include <stdio.h>
#include <string.h>

int main(){
	 char Palabra[20];
	 puts("Ingresa una palabra en mayuscula: ");
	 fflush(stdin);
	 scanf("%s",&Palabra);
    printf("Cadena en Mayuscula: %s\n",Palabra);
	 printf("Cadena en Minuscula: %s\n",strlen(Palabra));	 
	 return 0;
}
