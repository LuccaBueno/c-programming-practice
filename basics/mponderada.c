#include<stdio.h>
int main(){
	int i=1;
	float quant, nota, peso, somanota=0, somapeso=0, media;
	printf("Vamos calcular a media ponderada de quantos numeros?:  ");
	scanf("%d", &quant);

	printf("Informe os numero e seus respectivos pesos abaixo\n");

	for(i;i<=quant;i++){
		printf("Nota %d: ", i);
		scanf("%f", &nota);

		printf("Peso %d: ", i);
		scanf("%f", &peso);

		somapeso+=peso;
		somanota+= peso*nota;
	}
	
	if(somapeso != 0){
		media=somanota/somapeso;
		printf("A media ponderada eh %f", media);
	}else{
		printf("Impossivel dividir por zero");
	}
	
	return 0;
}
