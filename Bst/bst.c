#include "bst.h"
#include <stdio.h>
#include <stdlib.h>

arvoreBST inserir(int valor, arvoreBST raiz){
    if(raiz == NULL){
        arvoreBST novo = (arvoreBST) malloc(sizeof(struct no));
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

void pre_order(arvoreBST raiz){
    if(raiz != NULL){
        printf("[%d]", raiz->valor);

        pre_order(raiz->esq);
        pre_order(raiz->dir);
    }
}

void in_order(arvoreBST raiz){
    if(raiz != NULL){
        

        in_order(raiz->esq);
        printf("[%d]", raiz->valor);
        in_order(raiz->dir);
    }
}


void pos_order(arvoreBST raiz){
    if(raiz != NULL){
        pre_order(raiz->esq);
        pre_order(raiz->dir);
        printf("[%d]", raiz->valor);
    }
}

void exibir_reverso(arvoreBST raiz){
    if(raiz != NULL) {
      
    exibir_reverso(raiz->dir);
    printf("[%d]", raiz->valor);
    exibir_reverso(raiz->esq);
    
    
}
}
int qtd_par(arvoreBST raiz){
    if (raiz == NULL) {
        return 0; 
    }
    int contador = 0;

    if(raiz->valor % 2 == 0){
       contador++; 
    }  
    contador += qtd_par(raiz->esq);
    contador += qtd_par(raiz->dir);

    return contador;
}

int pai(arvoreBST raiz, int i){


   if (raiz->valor == i ){
            printf("-1");
        }
    if ((raiz->esq != NULL && raiz->esq->valor == i) || (raiz->dir != NULL && raiz->dir->valor == i)){
            printf("[%d]", raiz->valor);
            
        }else {
        
        if (i < raiz->valor) {
            pai(raiz->esq, i);
        } else if (i > raiz->valor) {
            pai(raiz->dir, i);
        } else {
            printf("-1\n");
        }
    }

}

int somatorio(arvoreBST raiz) {
    if (raiz == NULL) {
        return 0; 
    }

    int soma = raiz->valor; 
    soma += somatorio(raiz->esq);
    soma += somatorio(raiz->dir); 

    return soma;
}

int somatorio_par(arvoreBST raiz){
     if (raiz == NULL) {
        return 0; 
    }

    int soma = 0;

    if (raiz->valor % 2 == 0){
        soma += raiz->valor;
    }
    soma += somatorio_par(raiz->esq);
    soma += somatorio_par(raiz->dir);

    return soma;

    }

arvoreBST podar(arvoreBST raiz, int i){
    if (raiz == NULL) {
        return 0; 
    }
    if (raiz->valor == i){
        raiz->esq = NULL;
        raiz->dir = NULL;
    }
    podar(raiz->esq, i);
    podar(raiz->dir, i);

    return raiz;
}

arvoreBST busca(int valor, arvoreBST raiz) {
    if (raiz == NULL) {
        return NULL;
    }

    if (raiz->valor == valor) {
        return raiz;
    } else {
        if (valor >= raiz->valor) {
            return busca(valor, raiz->dir);
        } else {
            return busca(valor, raiz->esq);
        }
    }
}

void dobrar(arvoreBST raiz){
    int dobro;
    if(raiz != NULL){
        dobro = (raiz->valor) * (raiz->valor);
        printf("[%d]", dobro);
        dobrar(raiz->esq);
        dobro = (raiz->valor) * (raiz->valor);  
        dobrar(raiz->dir);
    }

}

arvoreBST mesclar(arvoreBST a, arvoreBST b){
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
void filhos(arvoreBST filha) {
    if (filha != NULL) {
        filhos(filha->esq);
        printf("[%d]", filha->valor);
        filhos(filha->dir);
    }
}
arvoreBST descendentes(int valor,arvoreBST raiz){
    
    if (raiz->valor == valor ){
        printf("Descendentes de [%d]: ", raiz->valor);
        filhos(raiz);
        printf("\n");
    } else{
        if(valor >= raiz->valor){
            return  descendentes(valor, raiz->dir);
        } else{
            return  descendentes(valor, raiz->esq);
        }
    }
}


int altura(arvoreBST raiz){
    if (raiz == NULL) {
        return 0; 
    }
    int contadoresq = 0;
    if(raiz->valor % 1 == 0){
        contadoresq++; 
        } 
    int contadordir = 0;
    if(raiz->valor % 1 == 0){
        contadordir++; 
        } 
    contadoresq += altura(raiz->esq);
    contadordir += altura(raiz->dir);

    if(contadordir > contadoresq){
        return contadordir;
    } else{
        return contadoresq;
    }
}

