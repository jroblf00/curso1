#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int num1,num2,cont=0;

	srand(time(NULL));
	num1 = random()%101;	
	printf("Adivina el numero entre 0 y 100: \n");
	do{	
		
		scanf("%d",&num2);
		if((num2<0) || (num2>100)){
			printf("fuera de rango\n");
			
		}
		else{
			cont++;
		}
	}while(num1!=num2);

	printf("Has acertado al %d intentos\n", cont);

	return 0;
}
