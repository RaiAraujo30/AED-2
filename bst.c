#include "bst.h"
#include <stdio.h>
#include <stdlib.h>






void in_order(arvore raiz){
    if(raiz != NULL){
        

        in_order(raiz->esq);
        printf("[%d]", raiz->valor);
        in_order(raiz->dir);
    }
}

void pre_order(arvore raiz){
    if(raiz != NULL){
        printf("[%d]", raiz->valor);

        pre_order(raiz->esq);
        pre_order(raiz->dir);
    }
}

void pos_order(arvore raiz){
    if(raiz != NULL){
        pre_order(raiz->esq);
        pre_order(raiz->dir);
        printf("[%d]", raiz->valor);
    }
}

int somatorio(arvore raiz) {
    if (raiz == NULL) {
        return 0; // Se a árvore está vazia, o somatório é zero
    }

    int soma = raiz->valor; // Inicialize a soma com o valor do nó atual
    soma += somatorio(raiz->esq); // Adicione o somatório da subárvore esquerda
    soma += somatorio(raiz->dir); // Adicione o somatório da subárvore direita

    return soma;
}

arvore busca(int valor, arvore raiz){
    if (raiz == NULL){
        return NULL;
    }
    if (raiz->valor == valor){
        return raiz;
    } else{
        if(valor >= raiz->valor){
            return  busca(valor, raiz->dir);
        } else{
            return  busca(valor, raiz->esq);
        }
    }
}

void dobrar(arvore raiz){
    int dobro;
    if(raiz != NULL){
        dobro = (raiz->valor) * (raiz->valor);
        printf("[%d]", dobro);
        dobrar(raiz->esq);
        dobro = (raiz->valor) * (raiz->valor);  
        dobrar(raiz->dir);
    }

}

arvore mesclar(arvore a, arvore b){
    if (a == NULL) {
        return b; // Se a árvore 'a' é nula, retornamos 'b'
    }

    if (b == NULL) {
        return a; // Se a árvore 'b' é nula, retornamos 'a'
    }
    if(b->valor >= a->valor){
            a->dir = inserir(b->valor, a->dir);
        } else{
            a->esq  = inserir(b->valor, a->esq);
        }
    return b;
    }

arvore inserir(int valor, arvore raiz){
    if(raiz == NULL){
        arvore novo = (arvore) malloc(sizeof(struct no));
        novo ->dir = NULL;
        novo-> esq = NULL;
        novo->valor = valor;
        return novo;
    }else{
        if(valor >= raiz->valor){
            raiz->dir = inserir(valor, raiz->dir);
        } else{
            raiz->esq  = inserir(valor, raiz->esq);
        }
    return raiz;
    }
    
}