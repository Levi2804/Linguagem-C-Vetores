#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	int v[5], i, s = 0;
	printf("Digite 5 n�meros inteiros\n\n");
	for(i = 0; i < 5; i++){
		printf("%i� n�mero: ", i + 1);
		scanf("%i", &v[i]);
	}
	for(i = 0; i < 5; i++){
		s += v[i];
	}
	printf("\nA soma dos 5 n�meros �: %i", s);
	return(0);
}
