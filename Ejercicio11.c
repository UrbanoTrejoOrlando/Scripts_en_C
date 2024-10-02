/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la multiplicacion de dos numeros */

#include <stdio.h>
int main(){
	float numero1, numero2, resultado = 0;
	// Entrada de datos
	puts("Numero 1: ");
	scanf("%f",&numero1);
	puts("Numero 2: ");
	scanf("%f",&numero2);
	resultado = numero1 * numero2;
	printf("Resultado: %.2f\n",resultado);
	return 0;
}
