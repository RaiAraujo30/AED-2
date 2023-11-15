#ifndef BST_H
#define BST_H

typedef struct no {
    int valor;
    struct no* esq, *dir;
} no;

typedef no* arvore;

arvore inserir(int valor, arvore raiz);
void pre_order(arvore raiz);
void in_order(arvore raiz);
void pos_order(arvore raiz);
int somatorio(arvore raiz);
arvore busca(int valor, arvore raiz);
void dobrar(arvore raiz);
arvore mesclar(arvore a, arvore b);

#endif