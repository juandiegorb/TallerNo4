/*
*Programa: Pedir 4 calificaciones y que muestre el promedio de ellos
*Fecha: 23 de Agosto del 2018
*Creador: Juan Diego Rios Ballesteros
*/
#include <stdio.h>

using namespace std;

// funcion principal
int main(int argc, char *argv[]) {
	// Variables
	float cali[5];
	float promedio = 0;
	// Iniciar el arreglo para introducir datos por el usuario
	for(int i = 0; i < 5; i++){
		printf("Ingrese las notas %d: \n", i+1);
		scanf("%f", &cali[i]);
		promedio += cali[i];
		printf("\n");
	}
	
		printf("Las notas ingresadas son %.2f");
	for(int i = 0; i < 5; i++){
		printf("%.2f, ", cali[i]);
	}
		printf("El promedio de notas es %.2f: ", promedio / 5); 
	
	return 0;
}

