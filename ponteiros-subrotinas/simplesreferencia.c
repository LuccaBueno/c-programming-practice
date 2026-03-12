#include<stdio.h>
void vezes(float num, float *resultado);
int main(){
	float num, resultado;
	printf("VEZES DOIS\n Digite um numero: "); 
	scanf("%f", &num);
	vezes(num, &resultado);
	printf("O resultado eh: %.2f", resultado);
	return 0;
}
void vezes(float num, float*resultado){
	*resultado=num*2;
}
