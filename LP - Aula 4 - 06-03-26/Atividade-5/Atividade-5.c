#include <stdio.h>

int main()
    {

        float n1, p1, n2, p2, n3, p3, mediaP;

        printf("Digite as notas e em sequencia o peso da nota correspondente: \n");
        scanf("%f%*c", &n1);
        scanf("%f%*c", &p1);
        scanf("%f%*c", &n2);
        scanf("%f%*c", &p2);
        scanf("%f%*c", &n3);
        scanf("%f%*c", &p3);

        mediaP = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1+p2+p3);

        printf("A media ponderada e %.2f", mediaP);

        getchar();

        return 0;

    }
