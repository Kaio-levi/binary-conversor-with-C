#include <stdio.h>

int main(){
    int numero_Decimal;
    int numero_Binairo;
    int vet_binario[8];
    int contador = 0;

    printf("digite um numero inteiro: \n");
    scanf("%d",&numero_Decimal);


    for(int i = 7; i >= 0 ; i--){
        numero_Binairo = numero_Decimal % 2;
        vet_binario[i] = numero_Binairo;
        numero_Decimal = numero_Decimal / 2;
    }

    printf("O numero em binario é: ");
    for(int i = 0; i < contador; i++){
        printf("%d", vet_binario[i]);
    }

    return 0;
}
