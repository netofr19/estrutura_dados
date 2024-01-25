#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle {
    int length;
    int width;
};

// Called by value
void fun(struct Rectangle r){
    r.length = 20;
    r.width = 30;
    cout<<"Length: "<<r.length<<endl<<"Width: "<<r.width<<endl;
}

// Called by adress
void fun2(struct Rectangle *p){
    p->length = 20;
    p->width = 30;
    cout<<"Length: "<<p->length<<endl<<"Width: "<<p->width<<endl;
}

// Return a struct

struct Rectangle *fun3(){
    struct Rectangle *p;
    p = new Rectangle; //C++ language
    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); -> C language
    p->length=15;
    p->width=7;

    return p;
}

int main()
{
    struct Rectangle r={10,5};
    fun(r);

    printf("Length: %d\nWidth: %d\n", r.length, r.width);

    printf("\n");
    printf("---------------------------------\n");
    printf("\n");

    fun2(&r);

    printf("Length: %d\nWidth: %d\n", r.length, r.width);

    printf("\n");
    printf("---------------------------------\n");
    printf("\n");

    struct Rectangle *ptr=fun3();

    printf("Length: %d\nWidth: %d\n", ptr->length, ptr->width);


    return 0;
}
