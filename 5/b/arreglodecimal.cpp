/*
*Programa: Inicializar un arreglo numerico decimal de 4 elementos, mostrar en pantalla y relizar la suma
*Fecha: 23 de Agosto del 2018
*Creador: Juan Diego Rios Ballesteros
*/

#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	float numeros[] = {1.75, 10.5, 3, 20.6}, suma = 0;
	
	for(int i = 0; i < 4; i++){
		printf("%.2f\n", numeros[i]);
		suma = suma + numeros[i];
	}
	printf("La suma es: %.2f", suma);	
	return 0;
}

