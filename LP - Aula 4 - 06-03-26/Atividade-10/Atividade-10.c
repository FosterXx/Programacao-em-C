#include <stdio.h>

int main()
    {

        float deposito, juros, rendimento;

        printf("\nDigite o valor de seu deposito: R$ ");
        scanf("%f%*c", &deposito);

        printf("\nDigite a taxa de juros em decimal (ex: 0.02 = 2%): ");
        scanf("%f%*c", &juros);

        rendimento = deposito * juros;

        printf("\nO rendimento de seu deposito de R$ %.2f foi de R$ %.2f reais.", deposito, rendimento);

        getchar();

        return 0;

    }
