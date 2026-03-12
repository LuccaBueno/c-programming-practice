#include<stdio.h>
int main(){
	int tamanho, i, j, half;
	do{
		printf("Digite um dos seguintes numeros 5, 7, 9: ");
		scanf("%d", &tamanho);
		if(tamanho<5 || tamanho>9|| tamanho%2==0){
			printf("Valor invalido! Tente novamente\n\n");
		}
	}while(tamanho<5 || tamanho>9|| tamanho%2==0);
	int matriz[tamanho][tamanho];
	for(i=0;i<tamanho;i++){
		printf("\n\n\n");
		for(j=0;j<tamanho;j++){
			//0
			matriz[i][j]=0;
			//1
			matriz[0][j]=1;
			matriz[i][0]=1;
			matriz[i][tamanho-1]=1;
			matriz[tamanho-1][j]=1;
			//5
			half=(tamanho/2);
			matriz[half][half]=5;
			
			printf("\t%d", matriz[i][j]);
		}
	}
	return 0;
}
