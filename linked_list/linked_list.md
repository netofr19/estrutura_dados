# Linked List

## About Linked List

```c
// Self-referential structure
struct Node {
    int data;
    struct Node *next;
};

typedef struct Node Node;

void display()

int main() {

    Node *p;
    p = (Node *)malloc(sizeof(Node)); //C programming
    // p = new Node; //C++ programming

    p->data = 10;
    p->next = 0;


    return 0;
}

```