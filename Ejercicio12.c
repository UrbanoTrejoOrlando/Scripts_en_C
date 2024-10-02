/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que determina los intereses que tiene una persona con el banco */
#include <stdio.h>
int main(){
	int tiempo, tiempoTranscurrido;
	float prestamo = 10000, interes = 0.27;
	// Entrada de datos
	puts("¿Anio en que solicito el prestamo?: ");
	scanf("%d",&tiempo);
	puts("Anio actual: ");
	scanf("%d",&tiempoTranscurrido);

	for(int i = tiempo; i <= tiempoTranscurrido; i++){
		prestamo += + (prestamo * interes);
		printf("El interes de %d es de: $%.2f\n",i,prestamo);
	 }
    return 0;
}
