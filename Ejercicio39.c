/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  22-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realiza las tablas de multiplicar */

#include <stdio.h>
int main(){
    int Filas, Columnas;
	 puts("Numero de filas: ");
	 scanf("%d",&Filas);
	 puts("Numero de columnas: ");
	 scanf("%d",&Columnas);
	 for(int i = 1; i <= Filas; i++ ){
		  printf("\n");
	     for(int j = 1; j <= Columnas; j++){
		  		printf("%d\t",i*j);
		  }
	 }
	 return 0;
}

