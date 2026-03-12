#include<stdio.h>
#define tam 8

int main(){
	int i, v1[tam], pos[tam], neg[tam];
	int pt=0, nt=0;
	 for(i=0;i<tam;i++){
	 	printf("Digite um numero %d/8: ", i+1);
	 	scanf("%d", &v1[i]);
	 	if(v1[i]>=0){
	 		pos[pt++]=v1[i];
	 		
		 }else{
		 	neg[nt++]=v1[i];
		 	
		 }
	 }
	 
	for(i=0;i<tam;i++){
		printf("%d ", v1[i]);
	}printf("\n\n Numeros positivos: ");
	
	for(i=0;i<(pt);i++){
		printf("%d ", pos[i]);
	}printf("\n\n Numeros negativos: ");
	
	for(i=0;i<(nt);i++){
		printf("%d ", neg[i]);
	}printf("\n\n");
	
	return 0;
}
