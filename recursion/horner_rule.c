#include <stdio.h>

double e(int x, int n){
    static double s;
    if(n==0){
        return s;
    } else {
        s = 1 + x*s/n;
        return e(x, n-1);
    }
    
}

int main()
{
    int x=1, n=10;
    printf("The exponencial of %d in %d terms is %lf\n", x, n, e(x,n));
    return 0;
}
