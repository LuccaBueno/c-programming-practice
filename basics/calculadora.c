#include<stdio.h>

int main(){
    float n1, n2;
    int operations;
    do {
        printf("digite o primeiro numero ");
        scanf("%f", &n1);
        printf("digite o segundo numero ");
        scanf("%f", &n2);
        printf("Operacoes disponives \n");
        printf("1 - soma \n2 - subtraçao \n3 - multiplicação \n4 - divisao\n0 - sair\n");
        printf("digite a operação desejada \n");
        scanf("%d", &operations);
        switch(operations) {
        case 1:
            printf("o resultado da soma eh %.2f \n", n1+n2);
            break;
        case 2:
            printf("o resultado da subtracao eh %.2f \n", n1-n2);
            break;
        case 3:
            printf("o resultado da multiplicacao eh %.2f \n", n1*n2);
            break;
        case 4:
            if(n2==0) {
                printf("impossivel dividir por zero.\n");
                break;
            }
            printf("o resultado da divisao eh %.2f \n", n1/n2);
            break;
        case 0:
            break;
        default:
            printf("operacao nao encontrada");
            break;
        }
    } while (operations != 0);
    return 0;
}

