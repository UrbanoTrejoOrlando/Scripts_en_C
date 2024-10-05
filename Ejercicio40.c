/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  22-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realiza un codigo que imprima los numeros de 5 en 5 hasta donde el usuario digite */

#include <stdio.h>

int main(){
	int Numero;
  	puts("Ingresa un numero: ");
	scanf("%d",&Numero);
	for(int i = 1; i <= Numero; i++){
		 if(i % 5 == 0){
		 	 printf("%d, ",i);
		 }
	}  	
   return 0;
}
