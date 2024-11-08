/* Orlando Urbano Trejo @Lando
 * Fecha: 18-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que multiplica dos arreglos */

#include <stdio.h>

int main() {
    int primero[5], segundo[5], multiplicacion[5];
    
    // Entrada de datos para el primer arreglo
    printf("Ingresa los valores del primer arreglo:\n");
    for(int i = 0; i < 5; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &primero[i]);
    }

    // Entrada de datos para el segundo arreglo
    printf("\nIngresa los valores del segundo arreglo (en orden inverso):\n");
    for(int i = 4; i >= 0; i--){
        printf("Valor %d: ", i + 1);  // Se ajustó el mensaje para mejorar la claridad.
        scanf("%d", &segundo[i]);
    }

    // Multiplicación de los arreglos
    for(int i = 0; i < 5; i++){
        multiplicacion[i] = primero[i] * segundo[i];
    }

    // Impresión de resultados
    printf("\nResultado de la multiplicación de los arreglos:\n");
    for(int i = 0; i < 5; i++){
        printf("Elemento %d: %d\n", i + 1, multiplicacion[i]);
    }

    return 0;
}

