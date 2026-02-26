#include <stdio.h>

int main(){
    int numero_Decimal;
    int numero_Binairo;

    printf("digite um numero inteiro: \n");
    scanf("%d",&numero_Decimal);

    while(numero_Decimal > 0){
        numero_Binairo = numero_Decimal % 2;
        printf("%d", numero_Binairo);
        numero_Decimal = numero_Decimal / 2;
    }
    return 0;
}
