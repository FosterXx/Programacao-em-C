#include <stdio.h>

int main()
    {
        float n1, n2, n3, n4, media;

        printf("\nDigite as 4 notas para a media:\n");
        scanf("%f%*c",&n1);
        scanf("%f%*c",&n2);
        scanf("%f%*c",&n3);
        scanf("%f%*c",&n4);

        media = (n1+n2+n3+n4)/4;

        printf("\nA sua media e %.2f",media);

        getchar();

        return 0;

    }
