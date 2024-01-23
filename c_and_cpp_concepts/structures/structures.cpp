#include <stdio.h>
#include <iostream>
using namespace std;

//Definition of the structure
struct Rectangle
{
    int length;
    int width;
    char x;
} r1,r2,r3;

//Declaration of the structure - disponible for all functions
struct Rectangle r4,r5,r6;

int main()
{
    struct Rectangle r7,r8,r9;
    struct Rectangle r10={10,5, 'a'};

    printf("%lu\n", sizeof(r10));
    cout<<r10.length<<endl;
    cout<<r10.width<<endl;
    cout<<r10.x<<endl;


    return 0;
}
