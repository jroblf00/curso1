#include <stdio.h>

float volumenCono(float radio, float altura);
float volumenOrtoedro(float lado1, float lado2, float altura);

int main(){

	int menu;
	float radio, alturaCono, lado1, lado2, alturaOrtoedro, 
	    totalCono, totalOrtoedro;

	do{
		system("clear");
		printf("Señale que figura geometrica desea calcular el volumen:\n\n");
		printf("	1) Cono\n");
		printf("	2) Orotoedro\n");
		printf("	3) Salir\n");
		printf("-> ");
	
		scanf("%d", &menu);
		
		if(menu==1){

			system("clear");
			printf("1) Cono\n\n");
			printf("Ingrese los datos necesarios\n");
			printf("radio: ");
			scanf("%f", &radio);
			
			printf("\naltura: ");
			scanf("%f", &alturaCono);
			
			totalCono=volumenCono(radio,alturaCono);
			printf("\nEl area es: %f", totalCono);
			printf("\nPulsa una tecla para volver al menu");
			getchar();
			getchar();
		}

		if(menu==2){

			system("clear");
			printf("2) Ortoedro\n\n");
			printf("Ingrese los datos necesarios\n");
			printf("lado1: ");
			scanf("%f", &lado1);

			printf("\nlado2: ");
			scanf("%f", &lado2);

			printf("\naltura: ");
			scanf("%f", &alturaOrtoedro);

			totalOrtoedro=volumenOrtoedro(lado1, lado2, alturaOrtoedro);
			printf("\nEl area es: %f", totalOrtoedro);
			printf("\nPulsa una tecla para volver al menu");
			getchar();
			getchar();			
						
		}

		if((menu<1) || (menu>3)){

		printf("\nError, ingrese el numero adecuado");
		printf("\npulse una tecla para volver al menu");
		getchar();
		getchar();		
		}

		if(menu==3) break;		

	}while(1);
	
	system("clear");
	
}

float volumenCono(float radio, float altura){

	return ((radio*radio*altura*3.14159265358979323846)/3);
}

float volumenOrtoedro(float base1, float base2, float altura){

	return (base1*base2*altura);
}
