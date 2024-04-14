#include<stdio.h>
#include<locale.h>

int main (){
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
		} else{
			B[i] = A[i] + 5;
		}
		printf("%f  ", B[i]);
	}
	
	return(0); 
}
