#include "bst.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    //declarar uma árvore
    arvore a = NULL;
    a = inserir(10, a);
    a = inserir(5, a);
    a = inserir(15, a);
    a = inserir(3, a);
    a = inserir(7, a);


    arvore b = NULL;
    b = inserir(11,b);
    b = inserir(1,b);
    b = inserir(6,b);
    b = inserir(9,b);


    printf("PRE-ORDER arvore a: ");
    pre_order(a);
    printf("\n");
    printf("PRE-ORDER arvore b: ");
    pre_order(b);
    printf("\n");

    printf("MESCLAGEM: ");
    mesclar(a, b);
    printf("pre-ORDER: ");
    pre_order(a);
    printf("\n");


    return 0;
}

