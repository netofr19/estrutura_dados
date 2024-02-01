#include <stdio.h>

void fun(int n){
    if (n>0){
        fun(n-1);
        printf("%d ", n);
    }
}

int fun2(int n){
    static int x=0;
    if (n>0){
        x++;
        return fun2(n-1)+x;
    }
    return 0;
}

int main()
{
    int x=10;

    fun(x);
    printf("\n");

    int a=5;
    printf("%d ", fun2(a));
    printf("\n");
    
    return 0;
}
