/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la cantidad total de dinero que tienes */

#include <stdio.h>
int main(){
	float cajero[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1, 0.50}, cantidad = 0, dinero;	
	for(int i = 0; i < 11; i++){
		printf("Cantidad de %.2f que tiene\n",cajero[i]);
		scanf("%f",&dinero);
		cantidad += cantidad + (dinero * cajero[i]);
	 	printf("Total: $%.2f\n",cantidad);
	}
	return 0;
}

