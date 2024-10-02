/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula el presupuesto anual en tres areas de un hospital */

#include <stdio.h>
int main(){
	int presupuesto;
	float urgencias = 0, pediatria = 0, traumatologia = 0;
	// Datos de entrada
	puts("Presupuesto anual:");
	scanf("%d",&presupuesto);
	urgencias = presupuesto * 0.37;
	pediatria = presupuesto * 0.42;
	traumatologia = presupuesto * 0.21;
	printf("Presupuesto Urgencias: $%.2f\n",urgencias);
	printf("Presupuesto Pediatria: $%.2f\n",pediatria);
	printf("Presupuesto Traumatologia: $%.2f\n",traumatologia);
	return 0;
}
