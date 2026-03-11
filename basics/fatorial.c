#include<stdio.h>
int main(){
int fatorial, input, i=1;
printf("digite um numero: ");
scanf("%d", &input);

for(fatorial=input; fatorial>=1; fatorial--){
	
	i=i*fatorial;
	
	}
printf("%d Fatorial eh %d", input, i);
return 0;
}
