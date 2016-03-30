#include <stdio.h> //-lm
#include <math.h>

#define TAM 15

float media(int enteros[TAM]);
float varianza(int dato[TAM], int media_);
float desviacion(int dato[TAM], int media_);

int main(){

	int enteros[TAM], cont;
	float med, var,des;
	
	printf("ingrese 15 enteros: \n");
	
	for(cont=0;cont<TAM;cont++){
		
		scanf("%d",&enteros[cont]);	
	}
	med=media(enteros);
	printf("\nLa media es: %f", med);

	var=varianza(enteros, med);
	printf("\nLa varianza es: %f", var);

	des=desviacion(enteros, med);
	printf("\nLa desviacion es: %f\n", des);
}

float media(int enteros[TAM]){
	
	int med=0,cont;

	for(cont=0;cont<TAM;cont++){
	
		med=med+enteros[cont];
	}
	return med/TAM;
}

float varianza(int dato[TAM], int media){
	
	int var=0, cont; 
	double valor;
	for(cont=0;cont<TAM;cont++){

		var=var+pow(dato[cont]-media,2);
	}
	valor=var/TAM;	
	return valor;
}

float desviacion(int dato[TAM], int media){
	
	 return sqrt(varianza(dato, media));
}
