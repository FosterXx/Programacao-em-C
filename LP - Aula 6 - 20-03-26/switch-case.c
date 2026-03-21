#include <stdio.h>
#include <ctype.h>

int main()
{

    // int i;

    // printf("Insira um numero inteiro de 1 a 5 \n");
    // scanf("%d", &i);

    // switch (i)
    // {
    // case 1:
    //     printf("Numero 1 foi digitado!");
    //     break;
    // case 2:
    //     printf("Numero 2 foi digitado!");
    //     break;
    // case 3:
    //     printf("Numero 3 foi digitado!");
    //     break;
    // case 4:
    //     printf("Numero 4 foi digitado!");
    //     break;
    // case 5:
    //     printf("Numero 5 foi digitado!");
    //     break;
    // default:
    //     break;
    // }
    
// ===========================================================================
    
// Estrutura case em C
    
//     float num1, num2, resultado;
//     int op;
    
//     printf("\nDigite o primeiro numero: ");
//     scanf("%f%*c", &num1);

//     printf("\nDigite o segundo numero: ");
//     scanf("%f%*c", &num2);

//     printf("\nDigite a operação:\n1 - SOMA\n2 - SUBTRACAO\n3 - MULTIPLICACAO\n4 - DIVISAO\n");
//     scanf("%d%*c", &op);
    
//     switch (op)
//     {
//         case 1:
//             resultado = num1 + num2;
//             printf("A soma e: %.2f",resultado);
//             break;

//         case 2:
//             resultado = num1 - num2;
//             printf("A subtracao e: %.2f",resultado);
//             break;

//         case 3:
//             resultado = num1 * num2;
//             printf("A multiplicacao e: %.2f",resultado);
//             break;

//         case 4:
//             if (num2 != 0)
//             {
//                 resultado = num1 / num2;
//                 printf("A divisao e: %.2f",resultado);
//             }
//             else
//             {
//                 printf("Error ou o numero 2 é igual a 0, impossivel divisão!");
//             }
//             break;

//         default:
//             break;
//     }
 
// ===========================================================================

//EXTRA 6:

    float energia, pagar;
    char tipo [2];
    
    printf("\nDigite a quantidade de kWh consumida: ");
    scanf("%f%*c", &energia);

    printf("\nDigite o tipo de instalacao:\nR - Residencial\nC - Comercial\nI - Industrial\n4 - DIVISAO\n");
    scanf(" %c", &tipo[0]);
    tipo[0] = toupper(tipo[0]);
    
    switch (tipo[0])
    {
        case 'R':
            if (energia > 0 && energia <= 500)
            {    
                pagar = energia * 0.40;
                printf("O valor a pagar de energia e R$ %.2f reais.", pagar);
            }
            else if (energia > 500)
            {
                pagar = energia * 0.65;
                printf("O valor a pagar de energia e R$ %.2f reais.", pagar);
            }
            else
            {
                printf("ERROR");
            }
            break;

        case 'C':
            if (energia > 0 && energia <= 1000)
            {    
                pagar = energia * 0.55;
                printf("O valor a pagar de energia e R$ %.2f reais.", pagar);
            }
            else if (energia > 1000)
            {
                pagar = energia * 0.60;
                printf("O valor a pagar de energia e R$ %.2f reais.", pagar);
            }
            else
            {
                printf("ERROR");
            }
            break;

        case 'I':
            if (energia > 0 && energia <= 5000)
            {    
                pagar = energia * 0.55;
                printf("O valor a pagar de energia e R$ %.2f reais.", pagar);
            }
            else if (energia > 5000)
            {
                pagar = energia * 0.60;
                printf("O valor a pagar de energia e R$ %.2f reais.", pagar);
            }
            else
            {
                printf("ERROR");
            }
            break;

        default:
            break;
    }

    getchar();
    
    return (0);
}