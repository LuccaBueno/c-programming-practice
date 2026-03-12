#include<stdio.h>
#include<locale.h>
#define paises 3


void troca(int *n1, int *n2){
	int aux;
	
	aux = *n1;
	*n1 = *n2;
	*n2 = aux;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, j, m[paises][4], aux ;
	char pais[paises][20];
	for(i=0;i<paises;i++){
		printf("País: ");
		scanf(" %s", &pais[i]);
		printf("Ouro: ");scanf("%d", &m[i][0]);
		printf("Prata: ");scanf("%d", &m[i][1]);
		printf("Bronze: ");scanf("%d", &m[i][2]);
		m[i][3]= m[i][0]+m[i][1]+m[i][2];
	}
	
	for(i=0;i<paises-1;i++){
		for(j=i+1;j<paises;j++){
			if(m[i][0]<m[j][0]){
				troca(&m[i][0],&m[j][0]);
				troca(&m[i][1],&m[j][1]);
				troca(&m[i][2],&m[j][2]);
				troca(&m[i][3],&m[j][3]);	
			}
			
			if(m[i][0]==m[j][0] && m[i][1]<m[j][1]){
				troca(&m[i][0],&m[j][0]);
				troca(&m[i][1],&m[j][1]);
				troca(&m[i][2],&m[j][2]);
				troca(&m[i][3],&m[j][3]);	
			}
			
			if(m[i][0]==m[j][0] && m[i][1]==m[j][1] && m[i][2]<m[j][2]){
				troca(&m[i][0],&m[j][0]);
				troca(&m[i][1],&m[j][1]);
				troca(&m[i][2],&m[j][2]);
				troca(&m[i][3],&m[j][3]);	
			}
		
		}		
		
	}
	
	printf("* QUADRO DE MEDALHAS *\n\n");
	printf("País\tTotal\tOuro\tPrata\tBronze\n");
	
	for(i=0;i<paises;i++){
		printf("%s\t%d\t%d\t%d\t%d\n", pais[i], m[i][3], m[i][0], m[i][1], m[i][2]);
	}
	
return 0;
}
