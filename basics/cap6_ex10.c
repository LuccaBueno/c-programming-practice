/*10. Faça um programa para corrigir provas de múltipla escolha. 
Cada prova tem oito questões e cada questão vale um ponto. 
O primeiro conjunto de dados a ser lido é o gabarito da prova. 
Os outros dados são os números dos alunos e as respostas que deram às questões. 
Existem dez alunos matriculados. Calcule e mostre:
o número e a nota de cada aluno; e
a porcentagem de aprovação, sabendo-se que a nota mínima é 6.*/
#include<stdio.h>
#define questoes 3//8
#define alunos 3//10
int main(){
	char gabarito[questoes];
	char provas[alunos][questoes+1];
	char aux1, aux2;
	int i, j;
	printf("*CORRECAO DE PROVAS DE MULTIPLA ESCOLHA*\n\n");
	printf("Quant Alunos: %d\nQuant Questoes: %d\n\n", alunos, questoes);
	//input-gabarito
	printf("Digite o gabarito da prova:\n");
	for(i=0;i<questoes;i++){
		provas[i][questoes+1]=0;//zera a coluna de pontos(ultima)
		do{
			printf("Questao %d: ", i+1);
			scanf(" %c", &aux1);
			
			if(aux1!='a'&&aux1!='b'&&aux1!='c'&&aux1!='d'&&aux1!='e'){
				printf("invalido\n");
			}
		}while(aux1!='a'&&aux1!='b'&&aux1!='c'&&aux1!='d'&&aux1!='e');
		gabarito[i]=aux1;
	}
	printf("\nRespostas dos alunos\n");
	for(i=0;i<alunos;i++){
		printf("Aluno %d\n", i+1);
		for(j=0;j<questoes;j++){
			do{
				printf("Questao %d: ", j+1);
				scanf(" %c", &aux2);
				
				if(aux1!='a'&&aux1!='b'&&aux1!='c'&&aux1!='d'&&aux1!='e'){
				printf("invalido\n");
				}
			}while(aux1!='a'&&aux1!='b'&&aux1!='c'&&aux1!='d'&&aux1!='e');
			provas[i][j]=aux2;
		
			if(provas[i][j]==gabarito[i]){
				provas[i][questoes]++;
			}
		}
	}
	printf("**CORRECAO**");
	for(i=0;i<alunos;i++){
		printf("\nAluno %d\n", i+1);
		printf("Acertou: %d\n", provas[i][questoes]);
	}
	printf("Fim--------------------------------------------------");
	return 0;
}
