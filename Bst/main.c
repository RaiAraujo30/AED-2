#include "bst.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    //declarar uma árvore
    arvoreBST minhaarvoreBST = NULL;
    int opcao, valor;

    do {
        printf("\nEscolha uma opcao:\n");
        printf("1. Inserir valor\n");
        printf("2. Pre-order\n");
        printf("3. In-order\n");
        printf("4. Pos-order\n");
        printf("5. Somatorio dos valores da arvoreBST\n");
        printf("6. Buscar valor\n");
        printf("7. Dobrar valores\n");
        printf("8. Mesclar arvoreBSTs\n");
        printf("9. Exibir reverso\n");
        printf("10. Quantidade de numeros pares\n");
        printf("11. Somatorio dos numeros pares\n");
        printf("12. Imprimir pai de um no\n");
        printf("13. Podar arvoreBST\n");
        printf("14. Altura da arvoreBST\n");
        printf("15. Descendentes de um no\n");
        printf("0. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                minhaarvoreBST = inserir(valor, minhaarvoreBST);
                break;
            case 2:
                printf("Pre-order: ");
                pre_order(minhaarvoreBST);
                printf("\n");
                break;
            case 3:
                printf("In-order: ");
                in_order(minhaarvoreBST);
                printf("\n");
                break;
            // case 4:
            //     printf("Pos-order: ");
            //     pos_order(minhaarvoreBST);
            //     printf("\n");
            //     break;
            // case 5:
            //     printf("Somatorio dos valores da arvoreBST: %d\n", somatorio(minhaarvoreBST));
            //     break;
            // case 6:
            //     printf("Digite o valor a ser buscado: ");
            //     scanf("%d", &valor);
            //     if (busca(valor, minhaarvoreBST) != NULL) {
            //         printf("Valor encontrado!\n");
            //     } else {
            //         printf("Valor nao encontrado!\n");
            //     }
            //     break;
            // case 7:
            //     dobrar(minhaarvoreBST);
            //     printf("Valores dobrados!\n");
            //     break;
            // case 8:
            //     // Mesclar árvores (implementar função)
            //     break;
            // case 9:
            //     exibir_reverso(minhaarvoreBST);
            //     printf("\n");
            //     break;
            // case 10:
            //     printf("Quantidade de numeros pares: %d\n", qtd_par(minhaarvoreBST));
            //     break;
            // case 11:
            //     printf("Somatorio dos numeros pares: %d\n", somatorio_par(minhaarvoreBST));
            //     break;
            // case 12:
            //     printf("Digite o valor do no para encontrar o pai: ");
            //     scanf("%d", &valor);
            //     pai(minhaarvoreBST, valor);
            //     break;
            // case 13:
            //     printf("Digite o valor do no que sera podado: ");
            //     scanf("%d", &valor);
            //     podar(minhaarvoreBST, valor);
            //     break;
            // case 14:
            //     printf("Altura da arvoreBST: %d\n", altura(minhaarvoreBST));
            //     break;
            // case 15:
            //     printf("Digite o valor do no que deseja ver os descendentes: ");
            //     scanf("%d", &valor);
            //     descendentes(valor, minhaarvoreBST);
            //     break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;

}

