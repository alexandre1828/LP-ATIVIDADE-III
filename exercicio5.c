#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()  {

    setlocale(LC_ALL, "portuguese");
    system("cls || clear");

     

     int opcao;
     int v = 0;
     char nomeproduto[999];
     float valorproduto[200];
     int quantidade[200];
     float valortotal = 0;  
     int i; 

      do
      {
        printf("digite 1 - para adicionar uma venda \n");
     printf("digite 2 - para sair do menu e exibir o total das vendas realizadas\n");
      scanf("%d",&opcao); 

      fflush(stdin);

                     
      if (opcao == 1)
      {
        printf("Digite  o nome do produto: ");
            gets(nomeproduto);


            printf("Digite o valor do produto: ");
            scanf("%f", &valorproduto[v]);

            printf("Digite a quantidade do produto: ");
            scanf("%d", &quantidade);

            fflush(stdin);

            valortotal += valorproduto[v] * quantidade[v];
      }

    
         
    
    
     if (opcao == 2)
      {
        
                 valortotal = valortotal;

      }

      
      

      

      } while (opcao != 2);


         
      printf("valor total: %.2f",valortotal);
      


}