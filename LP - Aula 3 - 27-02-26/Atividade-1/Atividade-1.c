#include <stdio.h>

main()
    {
        int num, ante, suce;
        #define constante 1;

        printf("Digite um numero de sua escolha: ");
        scanf("%d", &num);

        ante = num - constante;
        suce = num + constante;

        printf("\nO numero antecessor ao numero digitado e %d e o numero sucessor e %d.\n", ante, suce);

        return(0);

    }
