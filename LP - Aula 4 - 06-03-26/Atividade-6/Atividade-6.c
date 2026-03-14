#include <stdio.h>

#define aumento 1.25

int main()
    {

        float salario, salarioNovo;

        printf("\nDigite seu salario atual: R$ ");
        scanf("%f%*c", &salario);

        salarioNovo = salario * aumento;

        printf("\nSeu salario de R$ %.2f com o aumento fica R$ %.2f", salario, salarioNovo);

        getchar();

        return 0;

    }
