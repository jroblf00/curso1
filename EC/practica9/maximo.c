#include <stdio.h>
#include <stdlib.h>

int calculaMaximo();

int main(){
	
	int *lista;
	int cantidadDeNumeros;
	int valorMaximo;
	int i;
	
	printf("Indique la cantidad de numeros que desea ingresar\n");
	scanf("%d", &cantidadDeNumeros);
	
	lista = (int *)malloc(cantidadDeNumeros*sizeof(int));
	
	printf("Ingrese los numeros\n");
	for(i=0;i<cantidadDeNumeros;i++){
	
		scanf("%d",lista+i);
	}
	
	valorMaximo = calculaMaximo(cantidadDeNumeros, lista);
	
	printf("El valor maximo es %d\n", valorMaximo);
	
	free(lista);
	
	return 0;
}

int calculaMaximo(int tamanyoLeido, int *lista){
	
	int maximo;
	int i;
	
		maximo = *lista;
		for(i=0;i<tamanyoLeido;i++){
			if(maximo<*(lista+i)){
				maximo=*(lista+i);
			}
		}
	
	return maximo;
}