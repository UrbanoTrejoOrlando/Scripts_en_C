/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la edad de una persona en meses */

#include <stdio.h>
int main(){
	int edad, meses, resultado = 0;
	// Entrada de datos
	puts("Edad en años:");
	scanf("%d",&edad);
	puts("Cuantos meses:");
	scanf("%d",&meses);
	resultado += (edad * 12) + meses;
	printf("Edad: %d meses\n",resultado);
	return 0;
}
