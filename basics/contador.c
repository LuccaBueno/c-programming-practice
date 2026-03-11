#include<stdio.h>

int main(){

    int c;

    for(c = 0; c <= 10; c++){
        printf("%d\n", c);
    }

    c = 0;
    do{
        printf("%d\n", c);
        c++;
    }while(c<=10);

    c = 0;
    while(c<=10){
        printf("%d\n", c);
        c++;
    }

}
