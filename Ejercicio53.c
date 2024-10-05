/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Haz un ejercicio que ponga al reves una cadena ingresada por teclado */

#include <stdio.h>
#include <stdlib.h>
// Metodo principal
int main(){
    char Cadena[20];
    puts("----CADENA INVERTIDA----");
    puts("Ingres una palabra:");
    scanf("%s",&Cadena);
    strrev(Cadena);
    puts("Cadena invertida:");
    printf("%s",Cadena);
    return 0;
}
// Fin del metodo

