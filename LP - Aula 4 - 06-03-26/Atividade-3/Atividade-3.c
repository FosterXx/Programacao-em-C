
#include <stdio.h>

#define PI 3.14159

int main()
    {
        float area, raio;

        printf("\nDigite o valor do raio: ");
        scanf("%f%*c", &raio);

        area = PI * (raio*raio);

        printf("\nA area do circulo e %.2f.\n",area);

        getchar();

        return 0;

    }
