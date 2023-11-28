#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()  {

    setlocale(LC_ALL, "portuguese");

    int opcao;
    char numeroTelefone[900][200];
    char nome[900][200];
    int i;
    int salvo = 0;
        

        do {
            printf("1 - adicionar numero telefônico. \n");
            printf("2 - Exibir numeros cadastrados. \n");
            printf("\nDigite a opção desejada: ");
            scanf("%d", &opcao);
            printf("\n");
        
                fflush(stdin);
        
        switch (opcao) {
        
        case 1 :

        printf("Digite o nome do contato: ");
        gets(nome[salvo]);
        
        printf("Digite o número de telefone: ");
        gets(numeroTelefone[salvo]);
        
            salvo++;
            break;

        case 2 :

        for (i = 0; i < salvo; i++) {
        
        printf("Nome do contato: %s \n", nome[i]);
        printf("Número do telefone: %s \n", numeroTelefone[i]);
        printf("\n");
       
        }
        
           break;

        default:
        printf("Opção inválida. \n");
            break;
}
        
          }  while (opcao != 2);
        

    return 0;
}