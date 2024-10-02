/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para calcular el descuento de un medicamento */ 

#include <stdio.h>
int main(){
	char nombre[10];
	float precio, total = 0;
	// Entrada de datos
	puts("Nombre:");
	scanf("%s",&nombre);
	puts("Precio del Medicamento: ");
	scanf("%f",&precio);
	total = precio - (precio * 0.35);
    printf("Cliente: %s el total a pagar es de: $ %.2f\n",nombre,total);
	return 0;
}
