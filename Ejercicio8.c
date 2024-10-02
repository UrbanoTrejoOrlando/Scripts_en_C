/* Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para determinar el pago que debe realizar una persona por el consumo de agua */
#include <stdio.h>
int main(){
 	 int precioMetros,metros;
	 float resultado = 0;
	 // Entrada de datos
	 puts("Ingresa el precio de por metro: ");
	 scanf("%d",&precioMetros);
	 puts("Metros trabajados: ");
	 scanf("%d",&metros);
	 // Operaciones
	 resultado = precioMetros * metros;
	 printf("Pago:%.2f\n",resultado);
	 return 0;
}
