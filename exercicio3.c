#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()  {

    setlocale(LC_ALL, "portuguese");

     system("cls || clear");


int opcao;
    char numeroTelefone[900][200];
    char nome[900][200];
    int i,salvo = 0;


do {
            printf("1 - adicionar numero telef�nico. \n");
            printf("2 - Exibir numeros cadastrados. \n");
            printf("\nDigite a op��o desejada: ");
            scanf("%d", &opcao);
            printf("\n");

            fflush(stdin);
        
        
        switch (opcao) {
        
        case 1 :

        printf("Digite o nome do contato: ");
        gets(nome[salvo]);
        
        printf("Digite o n�mero de telefone: ");
        gets(numeroTelefone[salvo]);

            salvo++;
            break;

        case 2 :

        for (i = 0; i < salvo; i++) {
        
        printf("Nome do contato: %s \n", nome[i]);
        printf("N�mero do telefone: %s \n", numeroTelefone[i]);
        printf("\n");
       
        }
        
           break;

        default:
        printf("Op��o inv�lida. \n");
            break;
}
        
          }  while (opcao != 2);
        

    return 0;
    
        


}