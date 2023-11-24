#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_CONTATOS 100

struct Contato {
    char nome[50];
    char telefone[15];
};

int main() {

      setlocale(LC_ALL, "portuguese");
    
    struct Contato agenda[MAX_CONTATOS];

    int opcao;
    int totalContatos = 0;
    int i;

    do {
        
        printf("\nSelecione uma opção:\n");
        printf("1 - Adicionar contato\n");
        printf("2 - Mostrar contatos\n");
        printf("3 - Encerrar\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                
                if (totalContatos < MAX_CONTATOS) {
                    printf("Digite o nome: ");
                    scanf("%s", agenda[totalContatos].nome);

                    printf("Digite o número de telefone: ");
                    scanf("%s", agenda[totalContatos].telefone);

                    printf("Contato adicionado com sucesso!\n");

                    totalContatos++;
                } else {
                    printf("A agenda está cheia. Não é possível adicionar mais contatos.\n");
                }
                break;

            case 2:
                
                if (totalContatos > 0) {
                    printf("\nContatos cadastrados:\n");
                    for (i = 0; i < totalContatos; i++) {
                        printf("Nome: %s, Telefone: %s\n", agenda[i].nome, agenda[i].telefone);
                    }
                } else {
                    printf("\nNenhum contato cadastrado.\n");
                }
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