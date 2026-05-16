//6- Faça um programa que leia um vetor de 10 numeros. Depois crie e apresente dois vetores: um contendo os numeros pares e outro contendo os numeros impares do vetor inicial.

#include <stdio.h>

int main()
{

    int vetorInicial[10], vetorPares[10], vetorImpares[10], i, p = 0, imp = 0;

    for (i = 0; i < 10; i++)
    {
        printf("\nDigite o %d numero intero do Vetor Inicial: ", i+1);
        scanf("%d", &vetorInicial[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (vetorInicial[i] % 2 == 0)
        {
            vetorPares[p] = vetorInicial[i];
            p++;
        }
        else
        {
            vetorImpares[imp] = vetorInicial[i];
            imp++;
        }
    }

    printf("\n\nVetor de Pares:\n");
    for(i = 0; i < p; i++)
    {
        printf("%d - ", vetorPares[i]);
    }

    printf("\n\nVetor de Impares:\n");
    for(i = 0; i < imp; i++)
    {
        printf("%d - ", vetorImpares[i]);
    }

    return 0;



}