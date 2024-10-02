/* Orlando Urbano Trejo @Lando
 * Fecha: 17-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que imprima un arbol de navidad */

#include <stdio.h>
int main(){
	int altura, espacios, tronco;
    // Entrada de datos
	puts("Altura del arbol: ");
    scanf("%d", &altura);

    for(int i = 1; i <= altura; i++){
        espacios = altura - i; 

     	// Imprimir espacios en blanco
        for(int j = 1; j <= espacios; j++){
            printf(" ");
        }

        for(int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }  
	tronco = altura - 1; 
    // Imprimir el tronco del árbol
    for(int i = 1; i <= 2; i++){
        for(int j = 1; j <= tronco; j++){
           	printf(" ");
        }
        printf("**\n");
    }  

    return 0; 
}


