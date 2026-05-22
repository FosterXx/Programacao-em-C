//8- Faça um programa que preencha um vetor com dez numeros inteiros, calcule e mostre os numeros superiores a ciquenta e suas respectivas posições. O programa deverá monstrar mensagem se não existir nenhum número nessa condição.

#include <stdio.h>

main () {

    int vetorA[10], i, contmaior50 = 0;

    for (i=0;i<10;i++) {
        printf("\nDigite o %d numero inteiro do vetor (posicao %d): ", i+1, i);
        scanf("%d%*c", &vetorA[i]);

        if (vetorA[i]> 50) {
            contmaior50++;
        }
    }
    if (contmaior50>0) {
        printf("\nForam digitados %d numero(s) maiores que 50, sendo eles: ", contmaior50);

        for (i=0;i<10;i++) {
            if (vetorA[1]>50) {
                printf("\nNumero digitado: %d (posicao %d)", vetorA[i], i);
            }
        }
    }
    else{
        printf("\nNao foram digitados numeros maiores que 50.");
    }

    getchar();
    return(0);
}