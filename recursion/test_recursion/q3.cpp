#include <stdio.h>
#include <iostream>

int fun(int &x, int c){
    c = c-1;
    if (c==0){
        return 1;
    } else {
        x = x+1;
        return fun(x,c)*x;
    }
}

int main()
{
    int p=5;
    printf("%d", fun(p,p));

    return 0;
}
