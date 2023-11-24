#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main() {

      setlocale(LC_ALL, "portuguese");
    
    char nomes[5][50];
    int idades[5];
    float pesos[5];
    float alturas[5];
    int i;

    
    for (i = 0; i < 5; i++) {
        printf("Digite o nome da %da pessoa: ", i + 1);
        scanf("%s", nomes[i]);
        
        printf("Digite a idade de %s: ", nomes[i]);
        scanf("%d", &idades[i]);

        printf("Digite o peso de %s (em kg): ", nomes[i]);
        scanf("%f", &pesos[i]);

        printf("Digite a altura de %s (em metros): ", nomes[i]);
        scanf("%f", &alturas[i]);

        system("cls");
    }

    
    int indice_mais_alta = 0, indice_mais_baixa = 0;
    for (i = 1; i < 5; i++) {
        if (alturas[i] > alturas[indice_mais_alta])
            indice_mais_alta = i;
        if (alturas[i] < alturas[indice_mais_baixa])
            indice_mais_baixa = i;
    }

    printf("\nNome da pessoa mais alta: %s, Altura: %.2f metros\n", nomes[indice_mais_alta], alturas[indice_mais_alta]);
    printf("Nome da pessoa mais baixa: %s, Altura: %.2f metros\n", nomes[indice_mais_baixa], alturas[indice_mais_baixa]);

   
    int indice_maior_peso = 0, indice_menor_peso = 0;
    for (i = 1; i < 5; i++) {
        if (pesos[i] > pesos[indice_maior_peso])
            indice_maior_peso = i;
        if (pesos[i] < pesos[indice_menor_peso])
            indice_menor_peso = i;
    }

    printf("\nNome da pessoa com maior peso: %s, Peso: %.2f kg\n", nomes[indice_maior_peso], pesos[indice_maior_peso]);
    printf("Nome da pessoa com menor peso: %s, Peso: %.2f kg\n", nomes[indice_menor_peso], pesos[indice_menor_peso]);

    int indice_mais_velha = 0, indice_mais_nova = 0;
    for (i = 1; i < 5; i++) {
        if (idades[i] > idades[indice_mais_velha])
            indice_mais_velha = i;
        if (idades[i] < idades[indice_mais_nova])
            indice_mais_nova = i;
    }

    printf("\nNome da pessoa mais velha: %s, Idade: %d anos\n", nomes[indice_mais_velha], idades[indice_mais_velha]);
    printf("Nome da pessoa mais nova: %s, Idade: %d anos\n", nomes[indice_mais_nova], idades[indice_mais_nova]);

    return 0;
}