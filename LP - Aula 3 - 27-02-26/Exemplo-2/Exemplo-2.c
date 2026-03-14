#include <stdio.h> /* Insere o conteudo do arquivo stdio.h */

main()
    {
        // Declaracao de Variaveis:
        int idade, ano;
        float altura;
        char nome[30  ];

        // Entrada de Dados:
        printf("Digite seu nome: ");
        scanf("%s", nome); //acessa char e armazena o nome (sem espaço)

        // o "&" vem sempre antes de uma variavel numero

        printf("Digite sua idade: ");
        scanf("%d", &idade); // acessa int e armazena a idade

        printf("Digite a altura: ");
        scanf("%f", &altura);  // acessa float e armazena a altura

        //Processamento:
        ano = 2026 - idade; // calcula em "ano" o ano atual subtraindo a idade atual, resulta no ano que nasceu

        //Saida de Dados:
        printf("\nO nome e: %s", nome);
        printf("\nA altura e: %f", altura);
        printf("\nA idade e: %d", idade);
        printf("\nO ano de nascimento e: %d", ano);

    return (0);
    }

