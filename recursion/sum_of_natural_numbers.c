#include <stdio.h>

int Sum1(int n){ //Recursive
    if(n==0){
        return 0;
    } else {
        return Sum1(n-1)+n;
    }
}

int Sum2(int n){ //Iterative
    int s = 0;
    for(int i = 1; i <= n; i++){
        s += i;
    }
    return s;
}

int main()
{
    
    int r1, r2, n1=100, n2 = 200;
    r1 = Sum1(n1);
    r2 = Sum2(n2);
    printf ("The Sum of %d is %d\n", n1, r1);
    printf ("The Sum of %d is %d\n", n2, r2);

    return 0;
}
