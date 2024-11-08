/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Convierte a mayúscula y minúscula cualquier cadena de texto
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convertirAMayuscula(char *cadena) {
    for (int i = 0; i < strlen(cadena); i++) {
        cadena[i] = toupper(cadena[i]);
    }
}

void convertirAMinuscula(char *cadena) {
    for (int i = 0; i < strlen(cadena); i++) {
        cadena[i] = tolower(cadena[i]);
    }
}

int main() {
    char palabra[20];

    printf("Ingresa una palabra: ");
    scanf("%s", palabra);

    printf("Cadena original: %s\n", palabra);

    convertirAMayuscula(palabra);
    printf("Cadena en mayúscula: %s\n", palabra);

    convertirAMinuscula(palabra);
    printf("Cadena en minúscula: %s\n", palabra);

    return 0;
}

