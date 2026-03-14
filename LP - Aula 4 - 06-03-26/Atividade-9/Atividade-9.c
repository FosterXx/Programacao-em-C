#include <stdio.h>

#define gratificacao 50
#define imposto 0.10

int main()
    {

        float salarioBase, salarioNovo;

        printf("\nDigite seu salario base: R$ ");
        scanf("%f%*c", &salarioBase);

        salarioNovo = salarioBase + gratificacao - (salarioBase * imposto);

        printf("\nSeu salario de R$ %.2f com a gratificacao e descontando os impostos fica R$ %.2f reais.", salarioBase, salarioNovo);

        getchar();

        return 0;

    }
