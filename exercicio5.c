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
     char nomeproduto[999][200];
     float valorproduto[200];
     int quantidade[200];
     float valortotal[200];  
     
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
            gets(nomeproduto[v]);


            printf("Digite o valor do produto: ");
            scanf("%f", &valorproduto[v]);

            fflush(stdin);


            printf("Digite a quantidade do produto: ");
            scanf("%d", &quantidade[v]);

            

            valortotal[v] += valorproduto[v] * quantidade[v]; 
            v++;

            
      }

    
      
      } while (opcao != 2);

      for ( i = 0; i < v; i++)
    {
      printf("%d ° venda \n", i + 1);
      printf("nome do produto: %s \n",nomeproduto[i]);
      printf("valor do produto:%.2f \n",valorproduto[i]);
      printf("quantidade do produto: %.2d \n",quantidade[i]);
      printf("valor total: %.2f \n",valortotal[i]);
    }


         
     


}