#include <stdio.h>

int pow1(int m, int n){
    if(n==0){
        return 1;
    } else {
        return pow1(m,n-1)*m;
    }
}

int pow2(int m, int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return pow2(m*m, n/2);
    } else {
        return m*pow2(m*m, (n-1)/2);
    }
}

int main()
{
    int r1, m=2, n=9;
    r1 = pow1(m,n);
    printf("The power of %d by %d is %d\n", m,n,r1);

    int r2, x=3, y=4;
    r2 = pow2(x,y);
    printf("The power of %d by %d is %d\n", x,y,r2);

    return 0;
}
