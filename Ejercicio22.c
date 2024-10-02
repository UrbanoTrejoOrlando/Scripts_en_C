/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 *Algoritmo que calcule las comisiones de un empleado dependiendo de las ventas realizadas */
#include <stdio.h>
int main(){
	float comision, sueldo, precioVenta, total;
    int ventas, cambio;
	// Entrada de datos
	puts("Sueldo fijo:");
	scanf("%f",&sueldo);
	puts("Ventas Realizadas:");
	scanf("%d",&ventas);
	
	for(int i=0; i < ventas; i++){
		printf("Precio de la venta: %d\n",i+1);
		scanf("%f",&precioVenta);
		comision += (precioVenta * 0.10);
	}
	// Operaciones e impresion de resultado
	total = comision + sueldo;
	printf("Comision: $%.2f\n",comision);
	printf("Sueldo: $%.2f\n",total);
	return 0;	
}

