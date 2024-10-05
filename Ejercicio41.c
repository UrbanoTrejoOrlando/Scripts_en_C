/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  22-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realiza un codigo que calcule la siguiente suma (1-2+3-4+5-6 hasta n) donde n sea ingresada por el usuario */ 

#include <stdio.h>
int main(){
	 int Numero, Suma = 0, Negativos = 0, Pares = 0, Impares = 0;
	 puts("Ingresa un numero");
	 scanf("%d",&Numero);
	 for(int i = 1; i <= Numero; i++){
	 	  if(i % 2 == 0){
		  		Negativos = i * (-1);
				Pares += Negativos;
		  }
		  else{
		      Impares += i;
		  }
	 }
	 Suma = Pares + Impares;
	 printf("Suma: %d\n", Suma);
	 return 0;
}
