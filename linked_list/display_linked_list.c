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

void insertSortedList(Node *p, int x){
    Node *t, *q=NULL;
    t = (Node *)malloc(sizeof(Node));
    t->data=x;
    t->next=NULL;

    if (first==NULL){
        first=t;
    }
    else {
        while(p && p->data < x){
            q=p;
            p = p-> next;
        }
        if (p==first){
            t->next = first;
            first = t;
        }
        else {
            t->next = q->next;
            q->next = t;
        }
    }
}

int Delete(Node *p, int index){
    Node *q=NULL;
    int x=-1;

    if(index<1 || index > count(p)){
        return -1;
    }
    if(index==1){
        q=first;
        x=first->data;
        first = first->next;
        free(q);
        return x;
    }
    else {
        for(int i=0; i<index-1; i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        free(p);
        return x;
    }

}

int isSorted(Node *p){
    int x = INT_MIN;

    while (p!=NULL){
        if (p->data < x){
            return 0;
        }
        x=p->data;
        p=p->next;
    }
    return 1;
}

void RemoveDuplicate(Node *p){
    Node *q = p->next;

    while(q!=NULL){
        if (p->data!=q->data){
            p=q;
            q=q->next;
        }
        else{
            p->next = q->next;
            free(q);
            q=p->next;
        }
    }
}

void Reverse1(Node *p){
    int *A, i=0;
    Node *q=p;

    A = (int *)malloc(sizeof(int)*count(p));

    while (q != NULL){
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while (q!=NULL){
        q->data = A[i];
        q = q->next;
        i--;
    }

}

void Reverse2 (Node *p){
    Node *q = NULL, *r = NULL;

    while (p!=NULL){
        r = q;
        q = p;
        p = p->next;
        q->next=r;

    }
    first=q;
}

void Reverse3(Node *q, Node *p){
    if(p){
        Reverse3(p, p->next);
        p->next=q;
    }
    else{
        first=q;
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

    int B[] = {10, 20, 120, 40, 5};
    Create(B, 5);

    printf("Display the Linked List B: ");
    Display(first);

    printf("\n---------------------------------\n");

    printf("Display the Linked List B after insert element: ");
    insertSortedList(first, 35);
    Display(first);

    printf("\n---------------------------------\n");

    printf("Deleted value: %d\n", Delete(first, 3));

    printf("Display the Linked List B after delete element: ");
    Display(first);

    printf("\n---------------------------------\n");

    if(isSorted(first)){
        printf("The linked list B is sorted!");
    } else {
        printf("The linked list B isn't sorted!");
    }

    printf("\n---------------------------------\n");

    int C[] = {10, 10, 10, 20, 20, 20, 30, 40, 40, 40, 40, 50};
    Create(C, 12);

    printf("Linked List C before remove duplicates: ");
    Display(first);

    RemoveDuplicate(first);

    printf("\nLinked List C after remove duplicates: ");
    Display(first);

    printf("\n---------------------------------\n");

    int D[] = {10,20,30,40,50};
    Create(D,5);

    printf("Linked List D before reverse: ");
    Display(first);

    Reverse1(first);

    printf("\nLinked List D after reverse1: ");
    Display(first);

    Reverse2(first);

    printf("\nLinked List D after reverse2: ");
    Display(first);

    Reverse3(NULL, first);

    printf("\nLinked List D after reverse3: ");
    Display(first);

    printf("\n---------------------------------\n");

    return 0;
}
