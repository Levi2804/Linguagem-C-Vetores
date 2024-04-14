#include<stdio.h>
#include<locale.h>

int fat (int i);

int main(){
	setlocale(LC_ALL,"Portuguese");
	int v1[5], v2[5], i;
	printf("Digite 5 números para o vetor A\n");
	for(i = 0; i < 5; i++){
		printf("%iº número: ", i + 1);
		scanf("%i", &v1[i]);
	}		
	for(i = 0; i < 5; i++){
		v2[i] = fat(v1[i]);
	}
	printf("=========================");
	printf("\nVETOR 1\n");
	for(i = 0; i < 5; i++){
		printf("%i  ", v1[i]);
	}
	printf("\n=========================");
	printf("\nVETOR 2\n");
	for(i = 0; i < 5; i++){
		printf("%i  ", v2[i]);
	}
	
	return(0);
}

int fat (int i){
	int fat = 1, j;
	if(i == 0){
		return(1);
	} else{
		for(j = 1; j <= i; j++){
			fat *= j;
		}
		return(fat);
	}
}

