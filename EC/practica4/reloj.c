#include <stdio.h>

int seg_inicial, seg, min, horas, dias;

int main(){

	printf("ingrese un tiempo en segundos: ");
	scanf("%d", &seg_inicial);

	seg=seg_inicial;

	if(seg>59){
	
		min=seg/60;
		seg=seg%60;
	}

	if(min>59){

		horas=min/60;
		min=min%60;
	}
	if(horas>23){

		dias=horas/24;
		horas=horas%24;
	}

	printf("%d segundos equivalen a %d dias, %d horas, %d minutos, %d segundos.\n", seg_inicial,dias,horas,min,seg);
}
