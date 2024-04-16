#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	int A[8], i;
	printf("Digite 8 números inteiros\n\n");
	for(i = 0; i < 8; i++){
		printf("Digite %iº número: ", i+1);
		scanf("%i", &A[i]);
	}
	printf("\nVETOR\n");
	for(i = 7; i >= 0; i--){
		printf("%i  ", A[i]);
	}
	return(0);
}
