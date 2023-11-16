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
void exibir_reverso(arvore raiz);
int qtd_par(arvore raiz);
int somatorio_par(arvore raiz);
int pai(arvore raiz, int i);
arvore podar(arvore raiz, int i);
int altura(arvore raiz);
arvore descendentes(int valor,arvore raiz);

#endif