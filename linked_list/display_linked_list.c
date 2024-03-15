#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
} *first=NULL;

typedef struct Node Node;

void Create(int A[], int n){
    int i;
    Node *temp, *last;
    first=(Node *)malloc(sizeof(Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1; i<n;i++){
        temp=(Node *)malloc(sizeof(Node));
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

void Display(Node *p){
    while (p!=NULL){
        printf("%d ", p->data);
        p=p->next;
    }
}

int main()
{
    int A[]={3,5,7,10,15};

    Create(A, 5);

    Display(first);
    
    return 0;
}
