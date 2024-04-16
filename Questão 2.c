#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	char nome [50];
	int cont = 1, i;
	printf("Digite o seu nome completo: ");
	gets(nome);
	
	for(i = 0; nome[i] != '\0'; i++){
		cont++;
	}
	printf("\nO nome tem %i caracteres", cont);
	return(0);
}
