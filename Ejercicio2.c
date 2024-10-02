/* Autor: Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 
 * Algoritmo que calcule el precio total del boleto de una persona */

#include <stdio.h>

int main(){  	
	 float precioKilometro, distancia, precioBoleto = 0; 
	 // Entrada de datos
	 puts("Precio por kilometro:");  
	 scanf("%f",&precioKilometro); 
	 puts("Canitdad de kilometros a recorrer:");
	 scanf("%f",&distancia);
     // Impresion de resultado
	 printf("Precio del boleto: $%.2f\n",precioKilometro * distancia);
     return 0;
}
