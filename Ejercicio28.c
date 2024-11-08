#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 17-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que imprime un árbol de Navidad */

// Prototipos de funciones
void imprimirArbol(int altura);
void imprimirTronco(int altura);

int main(){
    int altura;
    
    // Entrada de datos
    puts("Altura del arbol: ");
    scanf("%d", &altura);

    // Imprimir el árbol
    imprimirArbol(altura);
    // Imprimir el tronco del árbol
    imprimirTronco(altura);

    return 0;
}

// Función que imprime la parte principal del árbol
void imprimirArbol(int altura){
    int espacios;
    
    for(int i = 1; i <= altura; i++){
        espacios = altura - i; 
        
        // Imprimir espacios en blanco
        for(int j = 1; j <= espacios; j++){
            printf(" ");
        }

        // Imprimir las estrellas
        for(int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }
}

// Función que imprime el tronco del árbol
void imprimirTronco(int altura){
    int tronco = altura - 1;

    // Imprimir el tronco del árbol
    for(int i = 1; i <= 2; i++){
        for(int j = 1; j <= tronco; j++){
            printf(" ");
        }
        printf("**\n");
    }
}

