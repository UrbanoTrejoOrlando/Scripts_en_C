#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la cantidad de euros a monedas y viceversa */

// Prototipo de las funciones para la conversión de divisas
float convertirAEuros(float dinero, float euro);
float convertirADolares(float dinero, float dolar);

int main(){
    printf("-------- MENU DE CONVERSIONES --------\n1) Euros\n2) Dolares");
    int opcion, dinero;
    float dolar = 16.89, euro = 0.053, resultado = 0;
    
    // Entrada de datos
    printf("\nElige una opcion: ");
    scanf("%d", &opcion);
    
    // Condiciones para elegir la opción
    if(opcion == 1){
        puts("Dinero (en euros):");
        scanf("%d", &dinero);
        resultado = convertirADolares(dinero, dolar);
        printf("Dinero: %.2f dolares\n", resultado);
    }
    else if(opcion == 2){
        puts("Dinero (en dolares):");
        scanf("%d", &dinero);
        resultado = convertirAEuros(dinero, euro);
        printf("Dinero: %.2f euros\n", resultado);
    }
    else{
        puts("Opcion no valida");
    }
    
    return 0;
}

// Función para convertir dinero a euros
float convertirAEuros(float dinero, float euro) {
    return dinero / euro;
}

// Función para convertir dinero a dólares
float convertirADolares(float dinero, float dolar) {
    return dinero / dolar;
}

