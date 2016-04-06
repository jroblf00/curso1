#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializaMatriz(int filas, int columnas, int **lista);
int calculaMinimo(int filas, int colunmas, int **lista);

int main(){
	int **lista;
	int valorMinimo;
	int filas,columnas;
	int i;
	
	srand(time(NULL));
	
	printf("Ingrese el numero de filas\n");
	scanf("%d", &filas);
	printf("Ingrese el numero de columnas\n");
	scanf("%d", &columnas);
	
	lista = (int**)malloc(filas*sizeof(int*));
	for(i=0;i<columnas;i++){
		
		*(lista+i) = (int*)malloc(columnas*sizeof(int)); 
	}
	
	inicializaMatriz(filas, columnas, lista);
	valorMinimo = calculaMinimo(filas, columnas, lista);
	
	printf("El numero mas pequeño es %d\n", valorMinimo);
	
	free(lista);
	
	return 0;
}

void inicializaMatriz(int filas, int columnas, int **lista){

	int i,j;
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			
			lista[i][j] = (random()%10)+1;
		}
	}
	
}

int calculaMinimo(int filas, int columnas, int **lista){
	
	int valorMinimo;
	int i,j;

	valorMinimo = lista[0][0];
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			
			if(valorMinimo>lista[i][j]){
				
				valorMinimo = lista[i][j];
			}
		}
	}

	return valorMinimo;
}