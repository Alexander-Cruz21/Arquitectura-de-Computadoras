#include <stdlib.h>
#include <stdio.h>

int main(){
	int a=0, b=1, aux, res;
	printf("Cuantos numeros de la serie quieres generar: ");
	int num;
	scanf("%d", &num);
	printf("%d   ", a);
	for(int i=0; i<num; i++){
		res  = a + b;
		printf("%d    ", res);
		a = b;
		b  = res;
	}
	return 0;
}

