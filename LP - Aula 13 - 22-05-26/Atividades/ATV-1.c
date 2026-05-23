// 1) Faça um programa que leia uma matriz 3x5 com numeros inteiros, calcule e mostre a quantidade de elementos pares e ímpares.

#include <stdio.h>

main() 
{
    int matrizA[3][5], contPar = 0, contImpar = 0;
    int i, j;

    for (i=0;i<3;i++) {
        
        for (j=0;j<5;j++) {
            
            printf("\nDigite o %d %d elemento da matriz: ", i, j);
            scanf("%d%*c", &matrizA[i][j]);

            if (matrizA[i][j] % 2 == 0) {
                contPar++;
            }
            else {
                contImpar++;
            }
        }
    }

            printf("\nTemos %d numeros pares e %d numeros impares.", contPar,contImpar);

    getchar();
    return(0);


}