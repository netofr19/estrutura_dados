#include <stdio.h>

double e(int x, int n){
    double s=1, num=1, den=1;
    int i;

    for(i=1;i<=n;i++){
        num*=x;
        den*=i;
        s+= (num/den);
    }
    return s;
}

int main()
{
    int x=1, n=10;
    printf("The exponencial of %d in %d terms is %lf\n", x, n, e(x,n));
    return 0;
}
