/*Faça um programa que apresente o menu de opções a seguir:
Menu de opções:
1. Média aritmética
2. Média ponderada
3. Sair
Digite a opção desejada.
Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
Na opção 3: sair do programa.
Verifique a possibilidade de opção inválida. Nesse caso, o programa deverá mostrar uma mensagem.*/
#include<stdio.h>
int main(){
	int opcao;
	float nota1=0, nota2=0;
		printf("Menu de opcoes:\n 1. Media aritimetica\n 2. Media ponderada \n 3. Sair\n Escolha a opcao: ");
		scanf("%d", &opcao);
		if(opcao>3 || opcao<1){
			printf("opcao invalida");
		}else if(opcao==1){
			printf("Digite a primeira nota: ");
			scanf("%f", &nota1);
			printf("Digite a segunda nota: ");
			scanf("%f", &nota2);
			printf("Media aritmetica: %.2f", (nota1+nota2)/2);
			return 0;
		}else if(opcao==2){
			float peso1=0, peso2=0, nota3=0, peso3=0, t_peso=0;
			printf("Media Ponderada\n");
			printf("Digite a primeira nota: ");
			scanf("%f", &nota1);
			printf("Digite o peso: ");
			scanf("%f", &peso1);
			printf("Digite a segunda nota: ");
			scanf("%f", &nota2);
			printf("Digite o peso: ");
			scanf("%f", &peso2);
			printf("Digite a terceira nota: ");
			scanf("%f", &nota3);
			printf("Digite o peso: ");
			scanf("%f", &peso3);
			
			t_peso=peso1+peso2+peso3;
			if(t_peso==0){
				printf("Impossivel dividir por zero!");
				return 1;
			}else{
				float media_ponderada= (nota1*peso1+nota2*peso2+nota3*peso3)/t_peso;
				printf("Media Ponderada: %.2f", media_ponderada);
				return 0;
			}
		}else{
			printf("Aplicativo encerrado");
			return 0;
		}
			
	}
		

