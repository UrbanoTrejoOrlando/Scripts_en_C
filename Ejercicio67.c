/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realiza un ejercicio que imprima una piramide de numeros */

#include <stdio.h>

int main() {
    int Numero, Posicion_Central, Numero_Posiciones, Posicion_Inicial, Posicion_Final;
    puts("Ingresa un numero:");
    scanf("%d", &Numero);
    
    Posicion_Central = Numero;
    Numero_Posiciones = Numero * 2 - 1; 
    Posicion_Inicial = Numero;
    Posicion_Final = Numero;
    
    for (int i = 0; i < Numero; i++) {
        int Contador = 1;
        for (int j = 1; j <= Numero_Posiciones; j++) {
            if (j < Posicion_Inicial || j > Posicion_Final) {
                printf(" ");
            } else {
                if (j < Numero) {
                    printf("%d", Contador);
                    Contador++;
                } else {
                    printf("%d", Contador);
                    Contador--;
                }
            }
        }
        printf("\n");
        Posicion_Final++;
        Posicion_Inicial--;
    }
    return 0;
}

