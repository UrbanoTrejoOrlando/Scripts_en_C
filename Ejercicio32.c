/* Orlando Urbano Trejo @Lando
 * Fecha: 18-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que registra calificaciones de varias materias y calcular su promedio */ 

#include <stdio.h>
int main() {
	char materias[6][50] = {
        "Cálculo Diferencial",
        "Fundamentos de Programación",
        "Química",
        "Fundamentos de investigación",
        "Matemáticas Discretas",
        "Desarrollo Sustentable"}; 
    float calificaciones[6][5], promediosMaterias[6] = {0}, promedioGeneral = 0; 
	for(int i = 0; i < 6; i++){
		// Entrada de datos
        printf("Calificacion %s:\n", materias[i]);
        for(int j = 0; j < 5; j++){
            printf("Unidad %d: ", j + 1);
            scanf("%f", &calificaciones[i][j]);
            promediosMaterias[i] += calificaciones[i][j];
        }
        promediosMaterias[i] /= 5; 
        promedioGeneral += promediosMaterias[i];
        puts("");
    }  

    promedioGeneral /= 6; 
     // Impresion de resultados
    printf("Unidad 1\tUnidad 2\tUnidad 3\tUnidad 4\tUnidad 5\tPromedio\n");
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 5; j++){
            printf("%.1f\t\t", calificaciones[i][j]);
        }
        printf(" %.2f\n", promediosMaterias[i]);
    }  
	printf("\nPromedio general: %.2f\n", promedioGeneral);
	return 0; 
}

