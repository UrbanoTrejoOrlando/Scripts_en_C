/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Escribir una palabra y ver cuántos caracteres tiene la cadena
 */

#include <stdio.h>
#include <string.h>

int main() {
    char Palabra[15];
    int Longitud_Cadena;

    puts("Ingresa una palabra: ");
    scanf("%s", Palabra);  // Elimina el & porque Palabra ya es un puntero a char

    Longitud_Cadena = strlen(Palabra);
    printf("La cadena '%s' tiene %d caracteres.\n", Palabra, Longitud_Cadena);

    return 0;
}

