#include <stdio.h>

int main()
    {

        float salario, salarioNovo, salarioDif, aumento;

        printf("\nDigite seu salario atual: R$ ");
        scanf("%f%*c", &salario);
        printf("\nDigite o percentual de aumento em decimal (ex: 1.20 = 20%): ");
        scanf("%f%*c", &aumento);

        salarioNovo = salario * aumento;

        salarioDif = salarioNovo - salario;

        printf("\nSeu salario de R$ %.2f com o aumento fica R$ %.2f", salario, salarioNovo);
        printf("\nO aumento foi de R$ %.2f reais.", salarioDif);

        getchar();

        return 0;

    }

