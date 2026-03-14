#include <stdio.h>

main()
    {
        //Declarar Variaveis:
        int n1, n2, n3, n4, soma;

        //Entrada de Dados:
        printf("\nDigite quatro numeros:\n");

        scanf("%d%*c", &n1);
        scanf("%d%*c", &n2);
        scanf("%d%*c", &n3);
        scanf("%d%*c", &n4);

        //Processamento de Dados(SOMA):
        soma = n1 + n2 + n3 + n4;

        //Saida de Dados:
        printf("\nResultado da soma = %d\n", soma);

        getchar(); //Para o programa a espera de um ENTER

        return 0;

    }
