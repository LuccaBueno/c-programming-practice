#include<stdio.h>

int main(){
	
    float v_carro, juros, valor_parcela;
    int parcelas;
    char f_pag;
    
    printf("Informe o valor do carro: ");
    scanf("%f", &v_carro);
    
    printf("V- A vista\nP- A prazo\nInforme a forma de pagamento: ");
    scanf(" %c", &f_pag);
    
    if(f_pag != 'v' && f_pag != 'p'){
        printf("Opcao invalida");
        return 1;
    } else {
        if(f_pag == 'v'){
            printf("O valor final sera %.2f", v_carro * 0.8);
            return 0;
        } else {
            printf("A quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54, 60.\nInforme a quantidade de parcelas desejadas: ");
            scanf("%d", &parcelas);
           	if(parcelas==6||parcelas==12||parcelas==18||parcelas==24||parcelas==30||parcelas==36||parcelas==42||parcelas==48||parcelas==54||parcelas==60){
            	juros=parcelas/200.0;
           		printf("Valor total a pagar: %.2f\n", v_carro * (1 + juros));
           		valor_parcela = (v_carro * (1 + juros)) / parcelas;
           		printf("Valor de cada parcela: %.2f\n", valor_parcela);
			}else{
				printf("%.2f eh um numero invalido de parcelas", parcelas);
				return 1;
			}
            
            
		}
    }   
    
    return 0;
}
			
     
