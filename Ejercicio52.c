/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Regresa el restante de la cadena a partir de la primera aparición del carácter indicado */

#include <stdio.h>
#include <string.h>

// Método principal
int main() {
    char abecedario[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char corte;
    char *nuevaCadena;

    puts("-----ABECEDARIO-----");
    puts("Ingresa la letra donde quieres realizar el corte: ");
    scanf(" %c", &corte);  // Nota el espacio antes de %c para evitar problemas con caracteres de nueva línea

    // Obtener el puntero a la primera aparición del carácter indicado
    nuevaCadena = strchr(abecedario, corte);

    if (nuevaCadena != NULL) {
        puts("Nueva cadena:");
        printf("%s\n", nuevaCadena);
    } else {
        puts("El carácter no se encontró en el abecedario.");
    }

    return 0;
}
// Fin del método

