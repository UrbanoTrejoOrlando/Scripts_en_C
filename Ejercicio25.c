/* Orlando Urbano Trejo @Lando
 * Fecha: 17-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para calcular el factorial de un numero */

#include <stdio.h>
int main(){
	int numero, resultado = 1; 
    // Entrada de datos
	puts("Ingresa un numero: ");
    scanf("%d",&numero);
    for(int i = 1; i <= numero; i++){
    	resultado *= i; 
    }  
    printf("El factorial de %d es: %d\n",numero,resultado);
    return 0; 
}

