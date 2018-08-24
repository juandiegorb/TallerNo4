/*
*Programa: Inicializar un arreglo de 10 elementos, y con un ciclo ver cual es el mayor
*Fecha: 23 de Agosto del 2018
*Creador: Juan Diego Rios Ballesteros
*/

#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int num[] = {0, 15, 5, 8, 20, 6, 13, 19, 21, 8};
	int i = 0, j = 0;
//	inicio el arreglo
	for(j = 0; j < 10; j++){
		if(num[j] > num[i]){//Define que dato es mayor al anterior
			i = j;			
		}
	};
	printf("El elemento mayor es %d", num[i]);
	
	return 0;
}

