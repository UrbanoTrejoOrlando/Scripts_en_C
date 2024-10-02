/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que determina el precio del boleto de un viaje */
#include <stdio.h>
int main(){
	float precioBoleto = 20.50,  numKilometros, precio = 0;
	// Entrada de datos
	puts("Numero de kilometros a recorrer: ");
	scanf("%f",&numKilometros);
	precio = precioBoleto * numKilometros;
	printf("El precio de tu boleto es de: $%.2f\n",precio);
	return 0;
}
