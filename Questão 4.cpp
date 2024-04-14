#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	int v[10], i, m;
	printf("Digite 10 números inteiros\n\n");
	for(i = 0; i < 10; i++){
		printf("%iº número: ", i + 1);
		scanf("%i", &v[i]);
	}
	m = v[0];
	for(i = 0; i < 10; i++){
		if(v[i] > m){
			m = v[i];
		}
	}
	printf("\nO maior número do vetor é %i", m);
	return(0);
}
