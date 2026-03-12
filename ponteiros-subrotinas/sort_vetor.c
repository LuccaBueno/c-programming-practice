#include<stdio.h>
#include<time.h>
#define tam 10
int main(){
	int num[tam], i, maior;
	srand(time(NULL));
	for(i=0; i<tam; i++){
		num[i] = rand();
		printf("%d ", num[i]);
	} 
	maior = num[0];
	for(i=1; i<tam; i++){
		if(num[i] > maior){
			maior = num[i];
		}
	}
	
	printf("\nO maior eh: %d", maior);
	return 0;
}
