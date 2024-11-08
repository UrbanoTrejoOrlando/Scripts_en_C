#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la cantidad total de dinero que tienes */

// Prototipo de la función para calcular el total
float calcularTotal(float cajero[], float cantidades[], int size);

int main(){
    float cajero[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1, 0.50};
    float cantidades[11] = {0}, cantidadTotal = 0;

    // Recolección de datos sobre las cantidades de cada denominación
    for(int i = 0; i < 11; i++){
        printf("Cantidad de %.2f que tienes: ", cajero[i]);
        scanf("%f", &cantidades[i]);
    }
    
    // Calcular el total de dinero
    cantidadTotal = calcularTotal(cajero, cantidades, 11);
    
    // Mostrar el total
    printf("Total de dinero: $%.2f\n", cantidadTotal);
    
    return 0;
}

// Función para calcular el total de dinero
float calcularTotal(float cajero[], float cantidades[], int size) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        total += cantidades[i] * cajero[i];  // Sumar el valor total por cada denominación
    }
    return total;
}

