#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()  {

    setlocale(LC_ALL, "portuguese");

     system("cls || clear");


     int num[5];

     int maior=0,menor=9999,i,par,impar,somapar = 0, contadornum = 0,somanum=0;
    float negativo,media;


    for ( i = 0; i < 5; i++)
    {
        printf("digite o numero %d:" , i + 1);
        scanf("%d" , &num[i]);

        somanum += num[i];
            contadornum++;

        if (num[i] % 2 == 0)
        {
            somapar +=num[i];
             par++; 

        }
        else
        {
            impar++;
        }
        

       
        

        if (num[i] < 0)
        {
            negativo++;
        }

        
        
        
        

        if (num[i] > maior)
        {
            maior = num[i];
        }
        
        if (num[i] < menor)
        {
            menor = num[i];
        }


        
    }

    printf("numeros inseridos \n");

    for ( i = 0; i < 5; i++)
    {
        printf("%d \n" , num[i]);
    }

   
     media = somanum / contadornum;

     printf("numeros impares:%d \n",impar);
     printf("números negativos: %f \n",negativo);
    printf(" maior:%d \n", maior);
     printf("menor:%d \n", menor);
    printf("media par: %.2f \n",(float)somapar / par);
    printf("media dos numeros: %.2f",media);

}