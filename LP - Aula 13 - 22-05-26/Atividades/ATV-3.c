// 3) Criar 2 (duas) matrizes 3x4, somar seus valores e armazenar o resultado em uma terceira matriz 3x4.

#include <stdio.h>

main()
{
    int matrizA[3][4];
    int matrizB[3][4];
    int matrizC[3][4];

    int i, j;

    for (i=0;i<3;i++) 
    {
        for (j=0;j<4;j++)
        {
            printf("\nDigite um numero para a matriz A: ");
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (i=0;i<3;i++) 
    {
        for (j=0;j<4;j++)
        {
            printf("\nDigite um numero para a matriz B: ");
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (i=0;i<3;i++) 
    {
        for (j=0;j<4;j++)
        {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%d - ",matrizC[i][j]);
        }
    }

    getchar();
    return(0);



}