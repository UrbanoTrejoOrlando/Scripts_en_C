/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  17-08-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Crear un programa que realice un menu de conversiones de unidades */

#include <stdio.h>

int main(){ 
    int Opcion,	UnidadEntrada, UnidadDestino;
    double Valor = 0, Resultado = 0; 
    char General[8][100] = {
	 "---CONVERSION DE UNIDADES----", 
	 "0) Longitud", 
         "1) Masa", 
	 "2) Tiempo",
	 "3) Volumen",
	 "4) Tamaño de Datos", 
	 "5) Velocidad", 
	 "&) Temperatura"};
    char Menu[7][9][10] = {
	 {"m","cm","km","mm","mi","yd","ft","in"}, 
	 {"kg","to","g","st","lb","oz"},
 	 {"m","ml","s","hr","d"}, 
	 {"l","ml","gal","ozl","m3","ft3","in3"},
	 {"bit", "kl","B","kb"},
	 {"mi/h","ft/s","m/s","km/h","kn"},
	 {"°C","°F","K"}};
    double Operaciones[7][9] = {
	 {1, 100, 0.001, 1000, 0.000621371, 1.09361, 3.28084, 39.3701}, 
	 {1,0.001, 1000, 0.157473, 2.20462, 35.274}, 
         {1, 6000, 60, 0.0166667, 0.000694444},  
	 {1, 1000, 0.219969, 35.1951, 0.001, 0.0353147, 61.0237},
	 {1,0.001,0.125,0.000125},
	 {1,1.46667,0.44704,1.60934,0.868976},
	 {1,1.8,1}};
      
    for(int i = 0; i < 8; i++){
        printf("%s\n", General[i]);
    }  
    printf("Elige una opcion: ");
    scanf("%d",&Opcion);

    if(Opcion >= 0 && Opcion <=6){
        for(int j = 0; j < 9; j++){
	   printf("%d) %s\n",j,Menu[Opcion][j]);
	} 
    }
    printf("Elige la unidad de entrada: ");
    scanf("%d",&UnidadEntrada);
    printf("Elige la unidad de destino: ");
    scanf("%d",&UnidadDestino);
    printf("Introduce el valor a convertir: ");
    scanf("%lf",&Valor);
    Resultado = Valor * (Operaciones[Opcion][UnidadDestino] / Operaciones[Opcion][UnidadEntrada]);
    printf("%.2f %s = %.2f %s\n", Valor, Menu[Opcion][UnidadEntrada], Resultado, Menu[Opcion][UnidadDestino]);
    return 0;
}
