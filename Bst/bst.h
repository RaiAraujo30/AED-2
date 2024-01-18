#ifndef BST_H
#define BST_H

typedef struct no {
    int valor;
    struct no* esq, *dir;
} no;

typedef no* arvoreBST;

arvoreBST inserir(int valor, arvoreBST raiz);
void pre_order(arvoreBST raiz);
void in_order(arvoreBST raiz);
void pos_order(arvoreBST raiz);
int somatorio(arvoreBST raiz);
arvoreBST busca(int valor, arvoreBST raiz);
void dobrar(arvoreBST raiz);
arvoreBST mesclar(arvoreBST a, arvoreBST b);
void exibir_reverso(arvoreBST raiz);
int qtd_par(arvoreBST raiz);
int somatorio_par(arvoreBST raiz);
int pai(arvoreBST raiz, int i);
arvoreBST podar(arvoreBST raiz, int i);
int altura(arvoreBST raiz);
arvoreBST descendentes(int valor,arvoreBST raiz);

#endif