#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main() {

      setlocale(LC_ALL, "portuguese");
    
    char nomes[5][50];
    int idades[5];
    float notas[5][3];
    float medias[5];
    int i;

    
    for (i = 0; i < 5; i++) {
        printf("Digite o nome do %do aluno: ", i + 1);
        scanf("%s", nomes[i]);
        
        printf("Digite a idade do %s: ", nomes[i]);
        scanf("%d", &idades[i]);

        printf("Digite as 3 notas do %s: ", nomes[i]);
        scanf("%f %f %f", &notas[i][0], &notas[i][1], &notas[i][2]);

        
        medias[i] = (notas[i][0] + notas[i][1] + notas[i][2]) / 3;
    }

    
    printf("\nDados dos Alunos:\n");
    for (i = 0; i < 5; i++) {
        printf("\nAluno: %s, Idade: %d, Notas: %.2f %.2f %.2f, Média: %.2f\n",
               nomes[i], idades[i], notas[i][0], notas[i][1], notas[i][2], medias[i]);
        
        // Verificando a situação do aluno
        if (medias[i] >= 7.0) {
            printf("Situação: Aprovado\n");
        } else if (medias[i] >= 5.0) {
            printf("Situação: Recuperação\n");
        } else {
            printf("Situação: Reprovado\n");
        }
    }

    return 0;
}