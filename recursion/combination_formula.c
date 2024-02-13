#include <stdio.h>

int fact(int n){
    if (n==0){
        return 1;
    } else {
        return n * fact(n-1);
    }
}

int Comb(int n, int r){
    int num, den;
    num = fact(n);
    den = fact(r) * fact(n-r);

    return num/den;
}

int Comb2(int n, int r){
    if (n==r || r==0){
        return 1;
    } else {
        return Comb2(n-1, r-1) + Comb2(n-1, r);
    }
}

int main()
{
    int n=5, r=3;

    printf("The combination of (%d, %d) is %d\n",n,r,Comb(n,r));
    printf("The combination of (%d, %d) is %d\n",n,r,Comb2(n,r));
    return 0;
}
