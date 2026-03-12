#include<stdio.h>
#include<locale.h>
void funcao(int, float, float*);
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, quant;
	float vunitario, valorapagar;
	for(i=1;i<=4;i++){
		printf("\nPedido %d\n", i);
		printf("Quantidade comprada: ");
		scanf("%d", &quant);
		printf("Valor unitário do produto: ");
		scanf("%f", &vunitario);
		funcao(quant, vunitario, &valorapagar);
	}
	printf("Valor a pagar: %.2f", valorapagar);
	return 0;
}
void funcao(int quant, float vunitario, float *valorapagar){
	*valorapagar+=(quant*vunitario);
}
