#include <stdio.h>

void media_void(float, float, float*);
void resultado_void(float, int*, int*, int*);

int main(){

    int i, t_reprovado=0, t_exame=0, t_aprovado=0;
    float n1, n2, media;

    for(i=1;i<=6;i++){

        printf("\nALUNO %d\n", i);

        printf("nota 1: ");
        scanf("%f",&n1);

        printf("nota 2: ");
        scanf("%f",&n2);

        media_void(n1,n2,&media);

        printf("Media: %.2f\n",media);

        resultado_void(media,&t_reprovado,&t_exame,&t_aprovado);
    }

    printf("\n\nReprovados: %d",t_reprovado);
    printf("\nExame: %d",t_exame);
    printf("\nAprovados: %d",t_aprovado);

    return 0;
}

void media_void(float n1,float n2,float *media){

    *media=(n1+n2)/2;

}

void resultado_void(float media,int *t_reprovado,int *t_exame,int *t_aprovado){

    printf("Resultado: ");

    if(media<=3){
        printf("Reprovado\n");
        (*t_reprovado)++;
    }

    else if(media<7){
        printf("Exame\n");
        (*t_exame)++;
    }

    else{
        printf("Aprovado\n");
        (*t_aprovado)++;
    }

}
