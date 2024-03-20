#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

int Max(Node *p){
    int max=INT_MIN;

    while(p){
        if(p->data > max){
            max=p->data;
        }
        p=p->next;
    }

    return max;
}

int recursiveMax(Node *p){
    int x = 0;

    if(p==0){
        return INT_MIN;
    }

    x = recursiveMax(p->next);

    if(x>p->data){
        return x;
    }
    else{
        return p->data;
    }
}

Node* linearSearch(Node *p, int key){
    while(p!=NULL){
        if(key==p->data)
            return p;
        p = p->next;
    }
    return NULL;
}

Node * recursiveLinearSearch(Node *p, int key){
    if (p==NULL){
        return NULL;
    }

    if (key==p->data){
        return p;
    }
    return recursiveLinearSearch(p->next, key);
}

Node* linearSearch2(Node *p, int key){
    Node *q=NULL;
    while(p!= NULL){
        if(key==p->data){
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}

void Insert(Node *p, int index, int x){
    Node *t;

    if(index < 0 || index > count(p)){
        return;
    }
    else {
        t = (Node *) malloc (sizeof(Node));
        t->data = x;

        if(index == 0){
            t->next=first;
            first=t;
        }
        else {
            for(int i=0; i<index-1; i++){
                p=p->next;
            }
            t->next =p->next;
            p->next = t;
        }
    }
}

int main()
{
    int A[]={3,5,7,10,15, 8, 12, 2};

    Node *temp;

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
    printf("Max of Linked List is: %d", Max(first));

    printf("\n---------------------------------\n");

    printf("Recursive Max of Linked List is: %d", recursiveMax(first));
    printf("\n---------------------------------\n");

    temp=linearSearch(first, 15);
    if(temp){
        printf("The key %d is Found on the linked list!", temp->data);
    }
    else{
        printf("The key was not found!");
    }

    printf("\n---------------------------------\n");

    temp=recursiveLinearSearch(first, 15);
    if(temp){
        printf("The key %d is Found on the linked list using recursive function!", temp->data);
    }
    else{
        printf("The key was not found using recursive function!");
    }

    printf("\n---------------------------------\n");

    temp=linearSearch2(first, 15);
    if(temp){
        printf("The key %d is Found on the linked list!", temp->data);
    }
    else{
        printf("The key was not found!");
    }

    printf("\n---------------------------------\n");

    printf("Display of the Linked List: ");
    Display(first);

    printf("\n---------------------------------\n");

    Insert(first, 0, 10);

    printf("Display of the Linked List: ");
    Display(first);

    printf("\n---------------------------------\n");

    Insert(first, 3, 26);

    printf("Display of the Linked List: ");
    Display(first);

    printf("\n---------------------------------\n");

    Insert(first, 10, 48);

    printf("Display of the Linked List: ");
    Display(first);

    printf("\n---------------------------------\n");

    
    return 0;
}
