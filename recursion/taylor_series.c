#include <stdio.h>

double e(int x, int n){
    static double p=1, f=1;
    double r;

    if (n==0){
        return 1;
    } else {
        r = e(x, n-1);
        p=p*x;
        f = f*n;
        return r+p/f;
    }
}
int main()
{
    int x=4, n=20;   
    printf("The exponencial of %d in %d terms is %lf\n", x, n, e(x,n));

    return 0;
}
