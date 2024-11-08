#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 17-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula el descuento de 3 tipos de vestidos */

// Prototipo de la función para calcular el precio total
float calcularTotal(int vestido, int cantidad);

int main(){
    int vestido, cantidad;
    
    // Mostrar opciones de vestidos
    printf("----VESTIDOS----\n1) Grandes $500\n2) Mediana $400\n3) Chica $300\n");
    
    // Entrada de datos
    puts("Elige la marca que deseas comprar (1-3): ");
    scanf("%d", &vestido);
    
    // Calcular el monto total
    float total = calcularTotal(vestido, cantidad);
    
    // Mostrar el monto total de la venta
    printf("Monto total de la venta: $%.2f\n", total);
    
    return 0;
}

// Función para calcular el precio total de los vestidos
float calcularTotal(int vestido, int cantidad) {
    float precio = 0;
    
    // Entrada de la cantidad de vestidos
    puts("Numero de vestidos que deseas comprar: ");
    scanf("%d", &cantidad);
    
    // Determinar el precio dependiendo del tipo de vestido
    if(vestido == 1){
        precio = 500;
    }
    else if(vestido == 2){
        precio = 400;
    }
    else if(vestido == 3){
        precio = 300;
    }
    
    return cantidad * precio;
}

