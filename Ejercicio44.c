/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Hacer un menu que considere las siguientes opciones:
 * 1) Cubo de un numero, 2) Numero par o impar, 3) Salir, */

#include <stdio.h>
#include <math.h>

int main(){
	 int Opcion, Numero;
	 float Cuadrado = 0, Cubo = 0;
    puts("------MENU DE OPCIONES------");
    puts("1) Cubo de un numero");
    puts("2) Numero par o impar");
    puts("3) Salir");
	 puts("Elige una opcion");
	 scanf("%d",&Opcion);
	 if(Opcion == 1){
	 	  puts("Ingresa un numero: ");
		  scanf("%d",&Numero);
		  Cubo = pow(Numero,3);
		  printf("El cubo de %d es: %.2f\n",Numero, Cubo);
	 }
    else if(Opcion == 2){
	     puts("Ingresa un numero: ");
        scanf("%d",&Numero);
		  if(Numero % 2 == 0){
		      puts("Numero par");
        }
		  else{
		      puts("Numero impar");
		  }
    }
	 else if(Opcion == 3){
		  puts("Fin del programa");
	 }
	 else{
	     puts("Opcion invalida");
	 }

	 return 0;
}
