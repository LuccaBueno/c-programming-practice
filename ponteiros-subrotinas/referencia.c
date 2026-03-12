#include<stdio.h>
void at(float, float);
void aq(float*);
int main(){
	int menu;
	float b, h, lado, *ponteirolado;
	printf("Escolha uma opcão\n 1-Area do Triangulo		2-Area do Quadrado		Outro-sair\n");
	scanf("%d", &menu);
	system("cls");
	if(menu == 1){
		printf("Preencha os dados\n");
		printf("Base do trinagulo: \n");scanf("%f", &b);
		printf("Altura do trinagulo: \n");scanf("%f", &h);
		
		at(b, h);
		
	}else if(menu == 2){
		printf("Preencha os dados\n");
		printf("Lado do quadrado: \n");scanf("%f", &lado);
		ponteirolado=&lado;
		
		aq(ponteirolado);
		
	}else{
		printf("Tchau, Obrigado");
		return 0;
	}
	
	return 0;
}
void at(float b, float h){
	printf("A area do triangulo eh %.2f", (b*h/2));
}
void aq(float *ponteirolado){
	printf("A area do quadrado eh %.2f", (*ponteirolado)*(*ponteirolado));
}
	
