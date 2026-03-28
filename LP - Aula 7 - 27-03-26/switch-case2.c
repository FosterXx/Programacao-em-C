#include <stdio.h>

int main()
{

// Extra-01

//     float salario, salarioF;

//     printf("\nDigite o salario do funcionario: ");
//     scanf("%f%*c", &salario);
   
//     if (salario <= 1250){

//         salarioF = salario * 1.15;

//         printf("\nO salario com aumento sera R$ %.2f reais.", salarioF);
//         }

//     else if (salario > 1250){

//         salarioF = salario * 1.10;
        
//         printf("\nO salario com aumento sera R$ %.2f reais.", salarioF);
//         }
//     else{

//         printf("\nERROR");
//     }

// ===========================================================================

// Extra-2

//     int idade;

//     printf("\nDigite sua idade: ");
//     scanf("%d%*c", &idade);

//     if (idade > 0 && idade < 18){
//         printf("\nVoce e menor de idade!");
//     }
//     else if (idade >= 18){
//         printf("\nVoce e maior de idade!");
//     }
//     else{
//         printf("\nERROR!");
//     }

// ===========================================================================

// Extra-3

    // float salario, salarioF;

    // printf("\nDigite o salario do funcionario: ");
    // scanf("%f%*c", &salario);
   
    // if (salario > 0 && salario < 1000){

    //     salarioF = salario * 1.30;

    //     printf("\nO salario com aumento sera R$ %.2f reais.", salarioF);
    //     }

    // else if (salario >= 1000){
        
    //     printf("\nVoce nao ganhara o aumento.");
    //     }
    // else{

    //     printf("\nERROR");
    // }

// ===========================================================================

// Extra-4

    // float salario, salarioF;

    // printf("\nDigite o salario do funcionario: ");
    // scanf("%f%*c", &salario);
   
    // if (salario > 0 && salario <= 1000){

    //     salarioF = salario * 1.35;

    //     printf("\nO salario com aumento sera R$ %.2f reais.", salarioF);
    //     }

    // else if (salario > 1000 && salario <= 1500){

    //     salarioF = salario * 1.30;

    //     printf("\nO salario com aumento sera R$ %.2f reais.", salarioF);
    //     }

    // else if (salario > 1500 && salario <= 2000){

    //     salarioF = salario * 1.20;

    //     printf("\nO salario com aumento sera R$ %.2f reais.", salarioF);
    //     }
    // else if (salario > 2000 && salario <= 4000){

    //     salarioF = salario * 1.10;

    //     printf("\nO salario com aumento sera R$ %.2f reais.", salarioF);
    //     }

    // else if (salario > 4000){

    //     printf("\nSem aumento!");
    //     }

    // else{

    //     printf("\nERROR");
    // }

// ===========================================================================

// Extra-5

    float casaValor, salario, prestacao;
    int meses;

    printf("\nDigite o valor do imovel: ");
    scanf("%f%*c", &casaValor);

    printf("\nDigite a quantidade de meses a pagar sem juros: ");
    scanf("%d%*c", &meses);

    printf("\nDigite seu salario mensal: ");
    scanf("%f%*c", &salario);

    if (meses > 0){
        
        prestacao = casaValor / meses;

        if (prestacao <= (salario * 0.30)){
            
            printf("\nO emprestimo para comprar a casa foi aprovado!\nA prestacao mensal sera de R$ %.2f reais por %d meses.", prestacao, meses);
        }
        else{

            printf("\nNao foi aprovado!\nPrestacao superior a 30 por cento do salario.");
        }

    }
    else{
        
        printf("\nNecessário ser um numero maior que 0!");
    }

    



    getchar ();
    return (0);
}
