#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX_VENDAS 100

int main() {

    setlocale(LC_ALL, "portuguese");
    
    char nomesProdutos[MAX_VENDAS][50];
    float precos[MAX_VENDAS];
    int quantidades[MAX_VENDAS];

    int opcao, totalVendas = 0;
    float totalGeral = 0.0;

    do {
         printf("-----------------------");
        printf("\nSelecione uma opção:\n");
        printf("1 - Adicionar venda\n");
        printf("2 - Exibir total de vendas\n");
        printf("3 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                
                if (totalVendas < MAX_VENDAS) {
                    printf("Digite o nome do produto: ");
                    scanf("%s", nomesProdutos[totalVendas]);

                    printf("Digite o preço do produto: ");
                    scanf("%f", &precos[totalVendas]);

                    printf("Digite a quantidade vendida: ");
                    scanf("%d", &quantidades[totalVendas]);

                    
                    totalGeral += precos[totalVendas] * quantidades[totalVendas];

                    printf("Venda registrada com sucesso!\n");

                    
                    totalVendas++;
                } else {
                    printf("A capacidade máxima de vendas foi atingida.\n");
                }
                break;

            case 2:
                
                printf("\nTotal de vendas realizadas: R$%.2f\n", totalGeral);
                break;

            case 3:
                
                printf("Encerrando o programa. Até mais!\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}