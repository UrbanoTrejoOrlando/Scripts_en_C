/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcule el sueldo total de un empleado */

#include <stdio.h>
int main(){
	float horas, sueldoHora, sueldoFinal = 0;
    // Entrada de datos
	puts("Horas trabajadas:");
	scanf("%f",&horas);
	puts("Sueldo por hora:");
 	scanf("%f",&sueldoHora);
	sueldoFinal = horas * sueldoHora;
	printf("Sueldo total: $%.2f\n",sueldoFinal);
	return 0;
}
