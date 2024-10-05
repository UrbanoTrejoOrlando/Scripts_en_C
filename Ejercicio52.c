/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Regresa el restante de la cadena a partir de la primera aparicion del caracter indicado */

#include <stdio.h>
#include <string.h>
// Metodo principal
int main(){
    char Abecedario[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char Corte;
    puts("-----ABECEDARIO-----");
    puts("Ingresa la letra donde quieres realizar el corte: ");
    scanf("%c",&Corte);

    puts("Nueva cadena");
    printf("%s\n",strrchr(Abecedario,Corte));

    return 0;
}
// Fin del metodo

