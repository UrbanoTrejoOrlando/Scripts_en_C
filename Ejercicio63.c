/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Escribir en lenguaje C un programa que:
1) Pida por teclado una letra (dato caracter) del abecedario.
2) Muestre por pantalla:
"ES UNA VOCAL", cuando la letra introducida sea una vocal minuscula (a, e, i, o, u) o una vocal mayuscula (A, E, I, O, U).
"NO ES UNA VOCAL", cuando la letra introducida no sea una vocal minuscula (a, e, i, o, u) ni una vocal mayuscula (A, E, I, O, U). */

#include <stdio.h>
#include <string.h>
// Metodo principal
int main(){
    char Letra[5];
    puts("Ingresa una letra del abecedario: ");
    scanf("%s",&Letra);
    if(strcmp(Letra,"a") == 0 || strcmp(Letra,"A") == 0 || strcmp(Letra,"e") == 0 || strcmp(Letra,"E") == 0
    || strcmp(Letra,"i") == 0 || strcmp(Letra,"O") == 0 || strcmp(Letra,"o") == 0 || strcmp(Letra,"O") == 0
    || strcmp(Letra,"u") == 0 || strcmp(Letra,"U") == 0){
        puts("Es una vocal");
    }
    else{
        puts("No es una vocal. Es una letra normal");
    }
    return 0;
}// Fin del metodo

