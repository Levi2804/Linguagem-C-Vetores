#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	int A[8], i;
	printf("Digite 8 números inteiros\n\n");
	//Laço para receber os 8 valores que será informado pelo usuario
	for(i = 0; i < 8; i++){
		printf("Digite %iº número: ", i+1);
		scanf("%i", &A[i]);
	}
	printf("\nVETOR\n");
	//Laço para exibir os 8 valores valores informados mas na ordem inversa
	for(i = 7; i >= 0; i--){
		printf("%i  ", A[i]);
	}
	return(0);
}
