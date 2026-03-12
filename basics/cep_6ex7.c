//Faça um programa que, no momento de preencher um vetor com oito números inteiros, já os armazene de forma crescente
#include<stdio.h>
int main(){
	int i, aux, j, vet[8];
	for(i=0;i<8;i++){
		printf("Digite um numero: ");
		scanf("%d", &aux);
		j=i;
		while(j>0&&vet[j-1]>aux){
			vet[j]=vet[j-1];
			j--;
		}
		vet[j]=aux;
	}
	printf("Numeros em ordem crescente: ");
	for(i=0;i<8;i++){
		printf("%d ", vet[i]);
	}
	
	return 0;
}
