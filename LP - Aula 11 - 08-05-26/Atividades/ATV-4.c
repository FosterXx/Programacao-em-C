//4 - Faça um vetor que receba 10 numeros inteiros positivos, em seguida alterar o vetor multiplicando todos os numeros pares por 3 e somando 1 aos numeros impares. Mostrar o vetor alternado

#include <stdio.h>

int main()
{
    int nums[10], i;

    for (i = 0; i < 10; i++)
    {
        printf("\nDigite o %d Numero Inteiro: ", i + 1);
        scanf("%d%*c", &nums[i]);
    }

    printf("\nVetor sem alteracao:");
    for ( i = 0; i < 10; i++)
    {
        printf("%d - ", nums[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (nums[i] % 2 == 0)
        {
            nums[i] *= 3;
        }
        else{
            nums[i] += 1;
        }
    }

    printf("\nVetor com alteracao:");
    for ( i = 0; i < 10; i++)
    {
        printf("%d - ", nums[i]);
    }
    
    return 0;
}