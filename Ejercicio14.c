/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la cantidad de euros a monedas y viceversa */

#include <stdio.h>
int main(){
	printf("-------- MENU DE CONVERSIONES --------\n1) Euros\n2) Dolares");
	int opcion, dinero, pesos;
	float dolar = 16.89, euro = 0.053, resultado = 0;
	// Entrada de datos
	printf("\nElige una opcion: ");
	scanf("%d",&opcion);
    // Condiciones 
	if(opcion == 1){
		puts("Dinero:");
		scanf("%d",&dinero);
		resultado = dinero/dolar;
		printf("Dinero: %.2f dolares\n",resultado);
	}
	else if(opcion == 2){
		puts("Dinero:");
		scanf("%d",&dinero);
		resultado = dinero/euro;
		printf("Dinero: %.2f euros\n",resultado);
	}
	else{
		puts("Opcion no valida");
    }
	return 0;
}

