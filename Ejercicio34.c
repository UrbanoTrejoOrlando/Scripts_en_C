/* Orlando Urbano Trejo (Lando)
 * Fecha: 18-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio: En la cafetería de Tesji hay una urna con pelotas de colores. verde, roja y amarilla. Cada una aplica
un desucento diferente en el total de tu compra. La pelota verde ofrece un 10% de descuento, la
amarilla un 5% y la roja un 15%. Con base a esos datos, imprime el monto final a pagar, ya con el
descuento. */

#include <stdio.h>

int main(){
	 int Pelota;
	 float Compra = 0, Resultado = 0;
	 puts("-----CAFETERIA TESJI-----");
	 puts("1) Pelota Verde");
	 puts("2) Pelota Roja");
	 puts("3) Pelota Amarilla");	

	 puts("Elige una opcion: ");
	 scanf("%d",&Pelota);

	 if(Pelota == 1){
		  puts("Descuento 10%");
	 	  puts("Total de tu compra: ");
		  scanf("%f",&Compra);
		  Resultado = Compra - (Compra * 0.10);
		  printf("Monto total: $%.2f\n",Resultado);
	 }
	 else if(Pelota == 2){
        puts("Descuento 5%");
        puts("Total de tu compra: ");
        scanf("%f",&Compra);
        Resultado = Compra - (Compra * 0.05);
        printf("Monto total: $%.2f\n",Resultado);
    }  	
	 else if(Pelota == 3){
        puts("Descuento 15%");
        puts("Total de tu compra: ");
        scanf("%f",&Compra);
        Resultado = Compra - (Compra * 0.15);
        printf("Monto total: $%.2f\n",Resultado);
	 }  
	 else{
		 puts("Opcion no valida");
	 }
	 return 0;
}
