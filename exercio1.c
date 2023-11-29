#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main() {

    system("cls || clear");
    setlocale(LC_ALL, "portuguese");

    char nome[5] [200];
    int idade[5];
    float altura[5];
    int i;
    float peso[5];
    float menorpeso,menoraltura = 9999;
    float maioraltura,maiorpeso = 0;
    int maioridade = 0;
    int menoridade = 9999;

    for ( i = 0; i < 5; i++)
    {
        printf("digite seu %d ° nome:",i +1);
        gets(nome[i]);

        printf(" \nDigite a idade: ");
            scanf("%d", &idade[i]);

             printf("Digite o peso: ");
            scanf("%f", &peso[i]);

             printf("Digite a altura: ");
            scanf("%f", &altura[i]);

            fflush(stdin);


       if (altura[i] > maioraltura)
       {
        maioraltura = altura[i];
       }

       if (altura[i] < menoraltura)
       {
        menoraltura = altura[i];
       }


       if (peso[i] > maiorpeso)
       {
        maiorpeso = peso[i];
       }

       if (peso[i] < menorpeso)
       {
        menorpeso = peso[i];
       }
       

       if (idade[i] > maioridade)
       {
        maioridade = idade[i];
       }

       if (idade[i] < menoridade)
       {
        menoridade = idade[i];
       }
       
         
    }


    printf("maior idade: %d \n",maioridade);
    printf("menor idade: %d \n",menoridade);
    printf("maior altura: %.2f\n",maioraltura);
     printf("menor altura: %.2f\n",menoraltura);
     printf("maior peso: %.2f\n",maiorpeso);
     printf("menor peso: %.2f\n",menorpeso);

    





}