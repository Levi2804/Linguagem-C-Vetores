#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	int A[8], i;
	printf("Digite 8 n�meros inteiros\n\n");
	for(i = 0; i < 8; i++){
		printf("Digite %i� n�mero: ", i+1);
		scanf("%i", &A[i]);
	}
	printf("\nVETOR\n");
	for(i = 7; i >= 0; i--){
		printf("%i  ", A[i]);
	}
	return(0);
}
