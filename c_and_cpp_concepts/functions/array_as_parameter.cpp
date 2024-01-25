#include <iostream>

using namespace std;

void fun(int *A, int n){
    for (int i=0; i<n;i++){
        cout<<A[i]<<endl;
    }
}

// Return a function

int * fun2(int size){
    int *p;
    p = new int[size];

    for (int i=0; i<size; i++){
        p[i] = i+1;
    }

    return p;
}

int main()
{
    int A[] = {2,4,6,8,10};
    int n=5;

    fun(A, n);
    cout<<"Length of the array: "<<sizeof(A)/sizeof(int)<<endl;

    for (int x:A){
        cout<<x<<' ';
    }

    printf("\n");
    printf("-------------------------");
    printf("\n");

    int *ptr, sz=5;

    ptr=fun2(sz);

    for (int i=0; i<sz; i++){
        cout<<ptr[i]<<endl;
    }


    return 0;
}
