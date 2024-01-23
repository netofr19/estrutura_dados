#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int width;
};

int main()
{
    Rectangle r={10,5};
    cout<<r.length<<endl;
    cout<<r.width<<endl;

    Rectangle *p=&r;
    cout<<p->length<<endl;
    cout<<p->width<<endl;

    Rectangle *p1;
    p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // C programming way
    // p1 = new Rectangle; -> C++ programming way

    p1->length=15;
    p1->width=7;

    cout<<p1->length<<endl;
    cout<<p1->width<<endl;

    return 0;
}
