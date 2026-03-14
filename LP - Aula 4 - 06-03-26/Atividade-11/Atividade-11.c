#include <stdio.h>
#include <math.h>

int main()
    {

        float espetaculoCusto, ingressoValor, ingressoVender;

        printf("\nDigite o custo do espetaculo: R$ ");
        scanf("%f%*c", &espetaculoCusto);

        printf("\nDigite o valor do ingresso: R$ ");
        scanf("%f%*c", &ingressoValor);

        ingressoVender = espetaculoCusto / ingressoValor;

        printf("\nSera necessario vender %.2f ingressos de R$ %.2f reais para cobrir o custo do espetaculo de R$ %.2f reais.", ceil(ingressoVender), ingressoValor, espetaculoCusto);

        getchar ();

        return 0;

    }
