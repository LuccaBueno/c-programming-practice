/*
m uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código.
Os códigos utilizados são:
1, 2, 3, 4 Votos para os respectivos candidatos
5 Voto nulo
6 Voto em branco
Faça um programa que calcule e mostre:
- o total de votos para cada candidato;
- o total de votos nulos;
- o total de votos em branco;
- a porcentagem de votos nulos sobre o total de votos; e
- a porcentagem de votos em branco sobre o total de votos.
Para finalizar o conjunto de votos, tem-se o valor zero e, para códigos inválidos, o programa deverá
mostrar uma mensagem.
*/
#include<stdio.h>
int main(){
	int eleitores, i=1, voto=0, tv=0, c1=0, c2=0, c3=0, c4=0, vn=0, b=0;
	printf("quantidade de eleitores: ");
	scanf("%d", &eleitores);

	
	for(i; i<=eleitores;i++){
		printf("Eleicao\nCandidatos/Opcoes\n 1-Candidato um\n 2-Candidato dois\n 3-Candidato tres\n 4-Candidato quatro\n 5-Voto Nulo\n 6-Voto em Branco\nInforme seu voto: ");
		scanf("%d", &voto);
		switch(voto){
            case 1:
                c1++;
                tv++;
                break;
            case 2:
                c2++;
                tv++;
                break;
            case 3:
                c3++;
                tv++;
                break;
            case 4:
                c4++;
                tv++;
                break;
            case 5:
                vn++;
                tv++;
                break;
            case 6:
                b++;
                tv++;
                break;
            default:
                printf("Voto invalido\n");
                i--; 
        }
	}

	printf("O total de votos para o candidato eh: %d\n", c1);
	printf("O total de votos para o candidato eh: %d\n", c2);
	printf("O total de votos para o candidato eh: %d\n", c3);
	printf("O total de votos para o candidato eh: %d\n", c4);
	printf("O total de votos nulos eh: %d\n", vn);
	printf("O total de votos em branco eh: %d\n", b);
	printf("Porcentagem de votos nulos sobre o total de votos %.2f%%\n", ((float)vn/tv)*100);
	printf("porcentagem de votos em branco sobre o total de votos: %.2f%%\n", ((float)b/tv)*100);
	return 0;
}
