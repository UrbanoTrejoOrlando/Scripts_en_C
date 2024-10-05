/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  20-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realizar la serie fibonacci */

#include <stdio.h>

int main(){
	 int Numero, x = 0, y = 1, z = 1;
	 puts("Numero: ");
	 scanf("%d",&Numero);
	 printf("1, ");
	 for(int i = 1; i < Numero; i++){
	     z = x + y;
 		  x = y;
        y = z;
		 printf("%d, ",z);	  
	 }

	 return 0;
}
