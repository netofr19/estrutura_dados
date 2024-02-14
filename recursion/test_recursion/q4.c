#include <stdio.h>

int fun(int n){
    int x=1, k;

    if(n==1){
        return x;
    } else {
        for (k=1; k<n; ++k){
            x = x + fun(k)*fun(n-k);
        }
        return x;
    }
}

int main()
{
    printf("%d", fun(5));
    return 0;
}
