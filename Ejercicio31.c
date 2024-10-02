/* Orlando Urbano Trejo @Lando
 * Fecha: 18-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula el descuento de una urna dependiendo del tipo de pelota que saque. */

#include <stdio.h>
int main(){
    int pelota;
    float compra = 0, resultado = 0; 
    printf("-----CAFETERIA TESJI-----\n1) Pelota Verde\n2) Pelota Roja\n3) Pelota Amarilla\n");
	// Entrada de datos
    puts("Elige una opcion: ");
    scanf("%d",&pelota);
	// Condicionales
    if(pelota == 1){
       	puts("Descuento 10%");
        puts("Total de tu compra: ");
        scanf("%f",&compra);
        resultado = compra - (compra * 0.10);
        printf("Monto total: $%.2f\n",resultado);
    }  
    else if(pelota == 2){
        puts("Descuento 5%");
        puts("Total de tu compra: ");
        scanf("%f",&compra);
        resultado = compra - (compra * 0.05);
        printf("Monto total: $%.2f\n",resultado);
    }   
    else if(pelota == 3){
        puts("Descuento 15%");
        puts("Total de tu compra: ");
        scanf("%f",&compra);
        resultado = compra - (compra * 0.15);
        printf("Monto total: $%.2f\n",resultado);
    }  
    else{
        puts("Opcion no valida");
    }  
    return 0; 
}
   
