// 2) Faça um programa que leia uma matriz 3x3, calcule a média aritmética dos valores lidos e exiba a quantidade de elementos que são menores que a média.

#include <stdio.h>

main()
{
    int matriz[3][3];
    int media = 0, soma = 0, contador = 0, menor = 0;
    int j, i;
    for (i=0;i<3;i++) 
    {
        for (j=0;j<3;j++)
        {
            printf("\nDigite um numero: ");
            scanf("%d", &matriz[i][j]);
            soma = soma + matriz[i][j];
            contador++;
        }
    }

    media = soma/contador;

    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            if (matriz[i][j] < media) {
                menor++;
            }
        }
    }
    printf("A quantidade de elementos menores que a media e: %d\n", menor);
    printf("A media de todos os elementos e: %d\n", media);

    getchar();
    return(0);



}