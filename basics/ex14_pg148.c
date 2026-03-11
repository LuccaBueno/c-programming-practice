/*Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião
em relação ao filme: ótimo — 3; bom — 2; regular — 1. Faça um programa que receba a idade e a opi-
nião de quinze espectadores, calcule e mostre:
- a média das idades das pessoas que responderam ótimo;
- a quantidade de pessoas que responderam regular; e
- a percentagem de pessoas que responderam bom, entre todos os espectadores analisados.*/
#include<stdio.h>
int main(){
	int idade=0, otimo_idades=0, opiniao, i=1, q_otimo=0, q_regular=0, q_bom=0, q_espec=0;
	printf("Quntidade de espectadores: ");
	scanf("%d", &q_espec);
	printf("Queremos saber a sua opiniao!!");
	for(i;i<=q_espec;i++){
		printf("Sua opiniao sobre o filme\n 3-Otimo 2-Bom 1-Regular: ");
		scanf("%d", &opiniao);
		if(opiniao<0||opiniao>3){
			printf("Opiniao invalida");
			return 1;
		}
		printf("Informe a sua idade: ");
		scanf("%d", &idade);
		if(opiniao==3){
			otimo_idades=otimo_idades+idade;
			q_otimo=q_otimo+1;
			
		}else if(opiniao==2){
			q_bom=q_bom+1;
			
		}else if(opiniao==1){
			q_regular=q_regular+1;
		}
		
	}
	if(q_otimo>0){
		printf("A media das idades das pessoas que responderam otimo eh %.2f\n", (float)otimo_idades/q_otimo);	
	}else{
		printf("Ninguem respondeu otimo\n");
	}
	
	printf("A quantidade de pessoas que responderam regular eh %d\n", q_regular);
 	 float percentual_bom = (q_bom / q_espec) * 100;
    	printf("A percentagem de pessoas que responderam bom entre todos os espectadores eh %.2f%%\n", percentual_bom);

    return 0;
}
