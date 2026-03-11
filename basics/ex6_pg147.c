/*Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:
- o valor total das compras à vista;
- o valor total das compras a prazo;
- o valor total das compras efetuadas; e
- o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes.*/
#include<stdio.h>

int main (){

	float vta = 0, vtp = 0, vtc, input;
	int i; 
	char cod;

	for(i = 1; i <= 15; i++){
		printf("\nCompra %d\n", i);

		do{
			printf("Digite o valor da compra:\n");
			scanf("%f", &input);

			if(input <= 0)
				printf("Valor invalido!\n");

		}while(input <= 0);

		do{
			printf("Digite V para a vista ou P para prazo:\n");
			scanf(" %c", &cod);

			if(cod!='v' && cod!='V' && cod!='p' && cod!='P')
				printf("Codigo invalido!\n");

		}while(cod!='v' && cod!='V' && cod!='p' && cod!='P');

		if(cod == 'v' || cod == 'V')
			vta += input;
		else
			vtp += input;
	}

	vtc = vta + vtp;

	printf("\nValor total a vista: %.2f\n", vta);
	printf("Valor total a prazo: %.2f\n", vtp);
	printf("Valor total das compras: %.2f\n", vtc);
	printf("Valor da primeira parcela: %.2f\n", vtp/3);

}

