#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	int v[5], i, s = 0;
	printf("Digite 5 números inteiros\n\n");
	for(i = 0; i < 5; i++){
		printf("%iº número: ", i + 1);
		scanf("%i", &v[i]);
	}
	for(i = 0; i < 5; i++){
		s += v[i];
	}
	printf("\nA soma dos 5 números é: %i", s);
	return(0);
}
