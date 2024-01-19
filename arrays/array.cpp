#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int A[5];
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    int B[] = {2,4,6,8,10,12,14};

    int C[10] = {10,20,30,40,50,60,70};

    cout<<sizeof(A)<<endl;
    cout<<A[1]<<endl;
    printf("%d\n", A[2]);

    printf("--------\n");

    cout<<sizeof(B)<<endl;
    cout<<C[8]<<endl;

    printf("--------\n");

    for (int i=0; i<10;i++){
        cout<<C[i]<<endl;
    }

    printf("--------\n");

    for (int x:B){
        cout<<x<<endl;
    }

    printf("--------\n");

     int n;
    cout<<"Enter Size: ";
    cin>>n;
    int D[n];

    for (int i=0; i<n; i++){
        printf("Element %d: ", i+1);
        cin>>D[i];
    }

    int count = 1;

    for (int x:D){
        printf("Element %d = %d\n", count, x);
        count += 1;
    }
    
    return 0;
}
