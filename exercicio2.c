#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()  {

     setlocale(LC_ALL, "portuguese");

     system("cls || clear");
    
    char nomes[5][200]; // Três disciplinas.
    float notas[5][3]; // Duas notas para cada uma das disciplinas.
    float media[5]; // Uma média para cada disciplina.
    float somaNotas = 0;
    int i, j;
    
    for (i = 0; i < 5; i++) {
        printf("\nDigite o %d ° nome do aluno:", i + 1);
        gets(nomes[i]);
        
        for (j = 0; j < 3; j++) {
            printf("Digite uma nota: ");
            scanf("%f",&notas[i][j]);
            
            somaNotas += notas[i][j];
        }
        
        media[i] = somaNotas / (float) j; 
        somaNotas = 0;
        
        fflush(stdin); 
        
    }
    
    printf("\nExibindo os dados dos alunos... \n");
    
    for (i = 0; i < 5; i++) {
        printf("\nNome do aluno: %s \n", nomes[i]);
        
        for (j = 0; j < 3; j++) {
            printf("Nota: %.1f \n", notas[i][j]);
        }
        
        printf("Media da disciplina: %.1f \n", media[i]);
        
        if (media[i] >= 7) {
            printf("Aprovado! \n");
        } else if (media[i] >= 5) {
            printf("Recuperacao! \n");
        } else {
            printf("Reprovado! \n");
        }
    }

    return 0;

}