#include <stdio.h>
#include <stdlib.h>

struct st_arvore{
    int valor;
    struct st_arvore *sad; // sub-arvore direita
    struct st_arvore *sae; // sub-árvore esquerda
};

typedef struct st_arvore arvore;

arvore* criaArvore(){
    return NULL;
}

int verificaArvore(arvore* t){
    return t == NULL;
}

void mostraArvore(arvore* t){
    printf("<");
    if (!verificaArvore(t)){
        printf("%d ", t->valor);
        mostraArvore(t->sae);
        mostraArvore(t->sad);
    }
    printf(">");
}

void insereDados(arvore** t, int num){
    if(*t == NULL){
        *t = (arvore*)malloc(sizeof(arvore));
        (*t)->sae = NULL;
        (*t)->sad = NULL;
        (*t)->valor = num;
    } else{
        if(num < (*t)-> valor){
            insereDados(&(*t)->sae, num);
        }
        if (num > (*t)->valor){
            insereDados(&(*t)->sad, num);
        }
    }
}

int buscaArvore(arvore* t, int num){
    if(verificaArvore(t)){
        return 0;
    }

    return t-> valor==num || buscaArvore(t->sae, num) || buscaArvore(t->sad, num);
}
    

int main()
{
    arvore* t = criaArvore();

    insereDados(&t, 12);
    insereDados(&t, 15);
    insereDados(&t, 10);
    insereDados(&t, 13);

    mostraArvore(t);

    if (verificaArvore(t)){
        printf("\nÁrvore vazia!!\n");
    } else{
        printf("\nÁrvore não vazia!!\n");
    }

    if (buscaArvore(t, 15)){
        printf("\nO elemento 15 pertence a árvore\n");
    } else{
        printf("\nO elemento 15 não pertence à árvore!\n");
    }

    if (buscaArvore(t, 22)){
        printf("\nO elemento 22 pertence a árvore\n");
    } else{
        printf("\nO elemento 22 não pertence à árvore!\n\n");
    }

    return 0;
}

