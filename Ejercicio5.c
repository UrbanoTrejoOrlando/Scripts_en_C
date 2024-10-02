/* Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023 
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la cantidad de ventas que realiza un vendedor y de acuerdo a esas ventas, realizar un descuento.*/

#include <stdio.h>
int main(){
	 int ventas, cantidad[40];
	 float totalFInal = 0,  total;
	 // Entrada de datos
	 puts("Numero de ventas: ");
	 scanf("%d",&ventas);
	 cantidad[] = [ventas];
	 // Ciclo for
	 for(int i=0; i<ventas; i++){
		  printf("Precio de la venta" + ventas);
		  totalFinal = totalFinal + ventas[i];
		 // Condiciones  
	     if(ventas[i] < 1000){
		      total += ventas[i];
	     }
	     else if(ventas[i] > 1000 && ventas[i] < 2000){
		      total += ventas[i];
	     }
	  }
	  printf("Total final: %.2f\n",totalFinal);
	  return 0;
}
