/*Faça um programa que preencha uma matriz 7 X 7 de números inteiros e crie dois vetores com sete po
sições cada um que contenham, respectivamente, o maior elemento de cada uma das linhas e o menor 
elemento de cada uma das colunas. Escreva a matriz e os dois vetores gerados.*/
#include<stdio.h>
#include<time.h>
#define m 7
#define n 7
int main(){
	int matriz[m][n], mlinha[m], mcoluna[n];
	int i, j, maior1, maior2;
	srand(time(NULL));
	printf("MATRIZ");
	for(i=0;i<m;i++){
		printf("\n\n");
		for(j=0;j<n;j++){
			matriz[i][j]=rand()%100;
			printf("%d\t", matriz[i][j]);
		}
	}
	printf("\n\n\n");
	printf("VETOR LINHA:\n");
	for(i=0;i<m;i++){
		maior1=matriz[i][0];
		for(j=1;j<n;j++){
			if(matriz[i][j]>maior1){
				maior1=matriz[i][j];
			}
		}
		mlinha[i]=maior1;
		printf("%d\t", mlinha[i]);
	}
	printf("\n\n\n");
	printf("VETOR COLUNA:\n");
	for(i=0;i<m;i++){
		maior2=matriz[0][i];
		for(j=1;j<n;j++){
			if(matriz[j][i]>maior2){
				maior2=matriz[j][i];
			}
			mcoluna[i]=maior2;
		}
		printf("%d\t", mcoluna[i]);
	}
	return 0;
}
