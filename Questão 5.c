#include<stdio.h>
#include<locale.h>

int main (){
	//Condições:
//•Se o índice do vetor a for zero, insira em b o respectivo valor de a;
//•Se o índice de a for par, insira em b o respectivo valor de a multiplicado por 5;
//•Se o índice do vetor a for ímpar, insira em b o respectivo valor a somado com 5;
//Ao final, o programa deve exibir o conteúdo dos vetores a e b.
	
	setlocale(LC_ALL,"Portuguese");
	float A[5], B[5]; 
	int i;
	printf("============================\n");
	printf(">>>Preenchimento do vetor A\n");
	for(i = 0; i < 5; i++){
		printf("%iº número: ", i + 1);
		scanf("%f", & A[i]);
	}
	printf("============================\n");
	
	printf("VETOR A\n");
	for(i = 0; i < 5; i++){
		printf("%f  ", A[i]);
	}
	printf("\n============================\n");
	printf("VETOR B\n");
	for(i = 0; i < 5; i++){
		if(A[i] == 0){
			B[i] = A[i];
		} else if(A[i] % 2 == 0){
			B[i] = A[i] * 5;
		} else if{
			B[i] = A[i] + 5;
		} else if(a[i] < 0){
            		printf("ERRO");
		}
		printf("%f  ", B[i]);
	}
	return(0); 
}
