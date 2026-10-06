#include <stdio.h>
#include <math.h>

int main(void){
    int a,b;
    float s = 0.0;

    #define ASS 12;

    //pedir datos de limite inferior 
    printf("ingresa el limite inferior:\t");
    scanf("%d",&a);
    
    //pedir datos limite superior
    printf("ingresa el limite superior:\t");
    scanf("%d",&b);

    //Sumado raices
    for( int i = a ; i <= b; i++){
        s += sqrt(i);
        printf("este es el numero:\t%d\neste es la raiz:\t%.3f\n",i,s);
    }

    printf("resultado de la suma: %.4f\n",s);
    return 0;
}

/*
* al compilar usar
* gcc clase1.c -o bin -lm
*/ 