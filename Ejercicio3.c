/* Autor: Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcule el total de una caja registradora */

#include <stdio.h> 

int main(){
	 int convertidor = 0, resultado;
	 float dinero[] = {1000, 500, 200, 100, 50, 20, 5, 2, 1, .50, .20, .10};
	 for(int i =0; i < 12; i++){
		  // Entrada de datos
		  printf("Cantidad de dinero que tiene:%.2f pesos\n",dinero[i]);
		  scanf("%d",&convertidor);
		  resultado = resultado + (convertidor * dinero[i]);
		  printf("Total almacenado: $%d pesos\n",resultado);
	 }
    return 0;
} 
