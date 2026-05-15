//5 - Faça um programa que leia dois vetores A e B, com 20 números inteiros. Efetue a soma dos dois vetores em um vetor C e imprima o vetor C em ordem crescente.

#include <stdio.h>

int main() {
    
    int vetorA[20], vetorB[20], vetorC[20], i;

    for(i = 0; i < 20; i++)
    {
        printf("\nDigite o %d Numero Inteiro do Vetor A: ", i+1);
        scanf("%d%*c", &vetorA[i]);
    }

    for(i = 0; i < 20; i++)
    {
        printf("\nDigite o %d Numero Inteiro do Vetor B: ", i+1);
        scanf("%d%*c", &vetorB[i]);
    }

    for(i = 0; i < 20; i++){
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    printf("\nNumeros do Vetor C: ");
    for ( i = 0; i < 20; i++)
    {
        printf("%d - ", vetorC[i]);
    }

    return 0;
}