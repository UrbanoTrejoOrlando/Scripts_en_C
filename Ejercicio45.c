/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Escribir un programa que lea un caracter en minuscula e imprima por pantalla, el mismo caracter en mayuscula */

#include <stdio.h>
// Metodo principal
int main(){
    char Letra_Minuscula, Letra_Mayuscula;
    puts("Ingresa una letra en minuscula");
    scanf("%c",&Letra_Minuscula);
    Letra_Mayuscula = Letra_Minuscula - 'a' + 'A';
    printf("La letra %c minuscula es %c en mayuscula\n",Letra_Minuscula,Letra_Mayuscula);

    return 0;
}// Fin del metodo

