#include <stdio.h>
#include <math.h>

int main()
{

//Raiz Quadrada:

//     int quadrado, num;
//     float raiz;

//     printf("Digite um numero inteiro: ");
//     scanf("%d", &num);

//     if(num % 2 == 0)
//     {
//         raiz = sqrt(num);
//         printf(" raiz quadrada e: %.3f", raiz);
//     }
//     else
//     {
//         quadrado = num * num;
//         printf("O numero e impar!\n");
//         printf("O numero ao quadrado e: %d", quadrado);
//     }

//===========================================================================

// Maior-Menor-Igual:

//     float num1, num2;
    
//     // Entrada de dados:
//     printf("\nDigite o primeiro numero: ");
//     scanf("%f%*c",&num1);

//     printf("\nDigite o segundo numero: ");
//     scanf("%f%*c",&num2);

//     // Determina e mostra o maior:
//     if(num1 > num2) {
//         printf("\nO maior numero: %.2f", num1);
//     }
//     if(num2 > num1) {
//         printf("\nO maior numero: %.2f", num2);
//     }
//     if(num1 == num2) {
//         printf("\nOs dois numeros sao iguais");
//     }

//===========================================================================

// && = and
// || = or

//===========================================================================

// Exercicio 1:

//     int num;

//     printf("\nDigite um numero: ");
//     scanf("%d%*c", &num);

//     if(num % 5 == 0 )
//     {
//         printf("\nO numero %d e divisivel por 5!", num);
//     }
//     else
//     {
//         printf("\nO numero %d nao e divisivel por 5!", num);
//     }

//===========================================================================

// Exercicio 2:

    // int idade;

    // printf("\nDigite sua idade: ");
    // scanf("%d%*c", &idade);

    // if(idade < 16) {
    //     printf("\nNAO ELEITOR! - (MENOR QUE 16 ANOS DE IDADE)");
    // }
    // if((idade >= 18) && (idade <= 65)) {
    //     printf("\nELEITOR OBRIGATORIO! - (ENTRE 18 E 65 ANOS DE IDADE)");
    // }
    // if( ((idade == 16) || (idade == 17)) || (idade > 65)) {
    //     printf("\nELEITOR FACULTATIVO! - (ENTRE 16 A 17 E MAIOR QUE 65 ANOS DE IDADE)");
    // }

//===========================================================================

// Exercicio 3:

//     float n1, n2, n3, media;

//     printf("\nDigite a primeira nota: ");
//     scanf("%f%*c", &n1);
//     printf("\nDigite a segunda nota: ");
//     scanf("%f%*c", &n2);
//     printf("\nDigite a terceira nota: ");
//     scanf("%f%*c", &n3);

//     media = (n1 + n2 + n3) / 3;

//     if(media < 6)
//     {
//         printf("REPROVADO! Sua media foi %.2f", media);
//     }

//     if(media >= 6)
//     {
//         printf("APROVADO! Sua media foi %.2f", media);
//     }

//===========================================================================

// Exercicio 4:

//     int num;

//     printf("\nDigite um numero: ");
//     scanf("%d%*c", &num);

//     if(num % 3 == 0 && num % 7 == 0)
//     {
//         printf("\nO numero %d e divisivel por 3 e por 7!");
//     }
    
//     else
//     {
//         printf("\nO numero %d nao e divisivel por 3 e por 7!");
//     }

//===========================================================================

// Exercicio 5:

//     char nome[36];
//     int idade;

//     printf("\nDigite seu nome: ");
//     gets(nome);

//     printf("\nDigite sua idade: ");
//     scanf("%d%*c", &idade);

//     if (idade <= 18 && idade > 0)
//     {
//         printf("\nOla %s! Sua mensalidade e R$ 50,00 reais!", nome);
//     }
//     else if (idade >= 19 && idade <= 29)
//     {
//         printf("\nOla %s! Sua mensalidade e R$ 70,00 reais!", nome);
//     }
//     else if (idade >= 30 && idade <= 45)
//     {
//         printf("\nOla %s! Sua mensalidade e R$ 90,00 reais!", nome);
//     }
//     else if (idade >= 46 && idade <= 65)
//     {
//         printf("\nOla %s! Sua mensalidade e R$ 130,00 reais!", nome);
//     }
//     else if (idade > 65)
//     {
//         printf("\nOla %s! Sua mensalidade e R$ 170,00 reais!", nome);
//     }
//     else
//     {
//         printf("\nERROR");
//     }


//===========================================================================

    //Para o programa a espera de um ENTER:
    getchar();

    return (0);
}