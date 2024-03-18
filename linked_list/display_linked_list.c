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

void recursiveDisplay(Node *p){
    if (p!=NULL){
        printf("%d ", p->data);
        recursiveDisplay(p->next);
    }
}

int count(Node *p){
    int c=0;
    while (p){
        c++;
        p=p->next;
    }

    return c;
}

int recursiveCount(Node *p){
    if(p!=NULL){
        return recursiveCount(p->next)+1;
    }
    else {
        return 0;
    }
}

int Sum(Node *p){
    int s = 0;
    while(p!=NULL){
        s+= p->data;
        p = p->next;
    }
    return s;
}

int recursiveSum(Node *p){
    if(p==NULL){
        return 0;
    }
    else {
        return recursiveSum(p->next) + p->data;
    }
}

int main()
{
    int A[]={3,5,7,10,15, 8, 12, 20};

    Create(A, 8);

    printf("\n---------------------------------\n");
    printf("Display of the Linked List: ");
    Display(first);

    printf("\n---------------------------------\n");
    printf("Recursive display of the Linked List: ");
    recursiveDisplay(first);

    printf("\n---------------------------------\n");
    printf("Length of the Linked List: %d", count(first));

    printf("\n---------------------------------\n");
    printf("Recursive length of the Linked List: %d", recursiveCount(first));

    printf("\n---------------------------------\n");
    printf("The sum of elements of the Linked List is: %d", Sum(first));

    printf("\n---------------------------------\n");
    printf("The recursive sum of elements of the Linked List is: %d", recursiveSum(first));

    printf("\n---------------------------------\n");

    
    return 0;
}
