/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Define un array de 10 numeros enteros con nombre Num y asigna 5 valores.Muestra el contenido de todos los elementos del array */

#include <stdio.h>
int main(){
	 int Num[12];
  	 Num[0] = 1, Num[1] = -2, Num[4] = 0, Num[6] = 14, Num[8] = 5; 	 
	 for(int i = 0; i < 12; i++){
	     printf("Posicion %d: %d\n",i,Num[i]);
	 }
	 return 0;
}
