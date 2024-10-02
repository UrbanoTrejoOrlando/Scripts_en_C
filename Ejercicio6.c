/* Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para determinar el costo que tendra realizar una llamada telefonica.*/

#include <stdio.h>
int main(){
	 int tiempo, costo;
	 float total = 0;
	 // Entrada de datos
	 puts("Tiempo de la llamada en minutos: ");
	 scanf("%d",&tiempo);
	 puts("Costo por minuto en pesos: ");
	 scanf("%d",&costo);
	 total = tiempo * costo;
	 printf("Costo de la llamada:$%.2f ",total);
	 return 0;
}
