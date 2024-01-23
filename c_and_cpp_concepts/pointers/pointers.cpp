#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int width;
    char x;
} r1,r2,r3;

int main()
{
    // Pointer for a variable
    int a=10;
    int *p;
    p = &a;

    cout<<a<<endl;
    printf("using pointer %d\n", *p);
    printf("using pointer %d %d\n", p, &a);

    printf("---------\n");

    // Pointer for an array
    int A[5] = {2,4,6,8,10};
    int *q;
    q = &A[0];

    for (int i=0; i<5; i++){
        cout<<q[i]<<endl;
    }

    printf("---------\n");

    // Assign an array created in heap
    int *h;
    // C programming way
    // h=(int *)malloc(5*sizeof(int));
    // C++ programming way
    h = new int[5];

    h[0]=10; h[1]=15; h[2]=14; h[3]=21; h[4]=31;

    for (int i = 0; i<5; i++){
        cout<<h[i]<<endl;
    }

    // C++ programming way
    delete [] h;
    // C programming way
    // free(p);

    printf("---------\n");

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;

    return 0;
}
