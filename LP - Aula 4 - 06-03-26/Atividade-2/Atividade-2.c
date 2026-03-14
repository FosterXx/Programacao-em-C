#include <stdio.h>

int main()
    {
        float base, altura, area;

        printf("\nDigite a base do triÂngulo: ");
        scanf("%f%*c",&base);

        printf("\nDigite a altura do triÂngulo: ");
        scanf("%f%*c",&altura);

        area = (base * altura)/2;

        printf("\nA area do triângulo e %.2f.",area);

        getchar();

        return 0;

    }




