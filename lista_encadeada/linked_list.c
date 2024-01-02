#include <stdio.h>
#include <stdlib.h>

// Linked List
struct st_node{
    int value;
    struct st_node *prox;
};

typedef struct st_node node;

int empty(node *ll){
    if(ll->prox == NULL){
        return 1;
    } else {
        return 0;
    }
}

void start(node *ll){
    ll->prox = NULL;
}

void free_list(node *ll){
    if(!empty(ll)){
        node *nextNode, *actualNode;
        actualNode = ll->prox;
        while(actualNode != NULL){
            nextNode = actualNode->prox;
            free(actualNode);
            actualNode = nextNode;
        }
    }
}

void showList(node *ll){
    if(empty(ll)){
        printf("\nThe list is empty!!!\n\n");
        return;
    }
    node *tmp;
    tmp = ll->prox;

    while(tmp != NULL){
        printf("%d ", tmp->value);
        tmp = tmp->prox;
    }
    printf("\n\n");
}

void insertBegin(node *ll){
    node *new = (node*)malloc(sizeof(node));
    if(!new){
        printf("No memory available!!\n");
        exit(1);
    }
    printf("Type the value: ");
    scanf("%d", &new->value);

    node *oldHead = ll->prox;

    ll->prox = new;
    new->prox = oldHead;
}

void insertEnd(node *ll){
    node *new = (node*)malloc(sizeof(node));
    if (!new){
        printf("No memory available!!\n");
        exit(1);
    }
    printf("Type the value: ");
    scanf("%d", &new->value);

    new->prox = NULL;

    if(empty(ll)){
        ll->prox = new;
    } else {
        node *tmp = ll->prox;

        while(tmp->prox != NULL){
            tmp = tmp->prox;
        }

        tmp->prox = new;
    }
}

void option(node *ll, int op){
    switch(op){
        case 0:
            free_list(ll);
            break;
        case 1:
            showList(ll);
            break;
        case 2:
            insertBegin(ll);
            break;
        case 3:
            insertEnd(ll);
            break;
        case 4:
            start(ll);
            break;
        default:
        printf("Invalid Command!");
    }
}

int menu(){
    int opt;
    
    printf("Choose a option: \n");
    printf("[0] - Exit\n");
    printf("[1] - Show List\n");
    printf("[2] - Add node on the begin\n");
    printf("[3] - Add node on the end\n");
    printf("[4] - Empty List\n");
    printf("Opção: ");
    scanf("%d", &opt);

    return opt;
}

int main()
{
    node *ll = (node*)malloc(sizeof(node));

    if (!ll){
        printf("No memory available!!\n");
        exit(1);
    }
    start(ll);
    int opt;

    do{
        opt=menu();
        option(ll, opt);
    } while(opt);

    free(ll);

    return 0;
}
