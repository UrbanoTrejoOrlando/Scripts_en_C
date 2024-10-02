/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para determinar si eres mayor de edad */
#include <stdio.h>
int main(){
	int edad;
	// Entrada de datos
	puts("Edad:");
	scanf("%d",&edad);
	// Condicionales
	if(edad >= 18){
		puts("Eres mayor de edad");
	}
	else{
		 puts("Eres menor de edad");
	}
	return 0;
}

