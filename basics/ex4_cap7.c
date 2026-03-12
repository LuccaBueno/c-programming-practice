// exercicio 04 capitulo 07//
/*Crie um programa que preencha uma matriz 10 x 20 com números inteiros e some cada uma das li
nhas, armazenando o resultado das somas em um vetor. A seguir, o programa deverá multiplicar cada 
elemento da matriz pela soma da linha correspondente e mostrar a matriz resultante*/

#include<stdio.h>
#include<time.h>
#define m 10
#define n 20
int main(){
	int matriz[m][n];
	int vetor[m];
	int resultado[m][n];
	int i, j;
	printf("MATRIZ");
	for(i=0;i<m;i++){
		vetor[i]=0;//inicializar
		printf("\n\n");
		for(j=0;j<n;j++){
	//gera "matriz" com numros aleatorios de 0 a 100
			matriz[i][j]=rand()%100;
			printf("%d\t", matriz[i][j]);
	//soma elemetos das linhas
			vetor[i]+=matriz[i][j];
		}
	}
	printf("\n\n\nVETOR\n\n");
	for(i=0;i<m;i++){
		printf("%d\t", vetor[i]);
	}
	printf("\n\n\nRESULTADO");
	for(i=0;i<m;i++){
		printf("\n\n");
		for(j=0;j<n;j++){
			resultado[i][j]=vetor[i]*matriz[i][j];
			printf("%d\t", resultado[i][j]);
		}
		
	}
	
	return 0;
}

