#include <stdio.h>
#include <math.h>

#define TAM 2

float distancia(float punto1[TAM], float punto2[TAM]);

int main(){

	int i,j;
	float punto1[TAM], punto2[TAM],resultado;

	printf("ingrese el x,y del punto 1: \n");
	
	for(i=0;i<TAM;i++){
		scanf("%f",&punto1[i]);
	}

	printf("ingrese el x,y del punto 2: \n");

	for(j=0;j<TAM;j++){
		scanf("%f",&punto2[j]);
	}
	
	resultado = distancia(punto1,punto2);
	printf("el resultado es: %f\n",resultado);
	
	return 0;
}

float distancia(float punto1[TAM], float punto2[TAM]){

	return sqrt(pow(punto2[0]-punto1[0],2)+pow(punto2[1]-punto1[1],2));
}
