#include <stdio.h>

int fact(int n){
    if(n==0){
        return 1;
    } else {
        return fact(n-1)*n;
    }
}

int fact2(int n){
    int fac=1;
    for(int i=1; i<=n;i++){
        fac *= i;
    }
    return fac;
}

int main()
{
    int r1, r2, n1 = 5, n2=6;
    r1 = fact(n1);
    r2 = fact2(n2);
    printf("The factorial of %d is %d\n", n1, r1);
    printf("The factorial of %d is %d\n", n2, r2);
    
    return 0;
}
