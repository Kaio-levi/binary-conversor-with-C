#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buffer[10];
    int numero_Decimal;
    int numero_Binario;
    int vet_binario[8];
    int contador = 0;
    while (1)
    {
        printf("digite um numero inteiro: \n");

        if (fgets(buffer, sizeof(buffer), stdin))
        {
            if (buffer[0] == '\n') continue;

            if (sscanf(buffer, "%d", &numero_Decimal) == 1)
            {
                if (numero_Decimal > 255 || numero_Decimal < -128)
                {
                    printf("O numero deve ser menor a 255\n");
                }
                else
                {
                    break;
                }
            }
            else
            {
                printf("Digite somente numeros!");
            }
        }
    }

    int numero_Original = numero_Decimal;
    for (int i = 7; i >= 0; i--)
    {
        numero_Binario = numero_Decimal % 2;
        vet_binario[i] = numero_Binario;
        numero_Decimal = numero_Decimal / 2;
    }

    if (numero_Original < 0)
    {
        for (int i = 7; i >= 0; i--)
        {
            if (vet_binario[i] == 0)
            {
                vet_binario[i] = 1;
            }
            else
            {
                vet_binario[i] = 0;
            }
        }

        for (int i = 7; i >= 0; i--)
        {
            if (vet_binario[i] == 0)
            {
                vet_binario[i] = 1;
                break;
            }
            else
            {
                vet_binario[i] = 0;
            }
        }
    }

    printf("Numero em binario: ");

    for (int i = 0; i < 8; i++)
    {
        printf("%d", vet_binario[i]);
    }

    printf("\n");

    return 0;
}
