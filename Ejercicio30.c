/* Orlando Urbano Trejo @Lando
 * Fecha: 18-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que multiplique dos arreglos */

#include <stdio.h>
int main() {
    int primero[5], segundo[5], multiplicacion[5], suma;
	for(int i = 0; i < 5; i++){
        // Entrada de datos
		printf("Valor %d: \n",i+1);
        scanf("%d", &primero[i]);
    }
    puts("");
    for(int i = 4; i >= 0; i--){
    	suma = i + 2;
        printf("Valor %d: \n",suma-1);
        scanf("%d", &segundo[i]);
    }
	for(int i = 0; i < 5; i++){
        multiplicacion[i] = primero[i] * segundo[i];
    }

    //Impresion de resultado
	puts("Resultado: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", multiplicacion[i]);
    }
	 return 0;
}

