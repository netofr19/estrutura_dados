# Recursion

## What is Recursion?

- In recursion, one function calls itself until that one condition is satisfied;

- Must be a finish condition, otherwise the code will run infinitely;

## Types of Recursion

- Tail Recursion
- Head Recursion
- Tree Recursion
- Indirect Recursion
- Nested Recursion

### Tail Recursion

- The call of the function is the last statement in a function;
- All the processing is done at calling time;
- It's a linear recursion;

```c
void func(int n){
    if(n>0){
        printf("%d", n);
        fun(n-1);
    }
}
fun(3);
```
#### Tail Recursion in a format of while loop

```c
void func(int n){
    while(n>0){
        printf("%d", n);
        n--;
    }
}
fun(3);
```

### Head Recursion

- The first statement inside the function is recursive call;
- All the processing is done at returning time;
- It's a linear recursion;

```c
void func(int n){
    if(n>0){
        fun(n-1);
        printf("%d", n);
    }
}
fun(3);
```

#### Head Recursion in a format of while loop
```c
void func(int n){
    int i=1;
    while(i<=n){
        printf("%d", i);
        i++;
    }
}
fun(3);
```

### Tree Recursion

- It's a function that is a recursive function and is calling itself more than one time;

```c
void fun(int n){
    if (n>0){
        printf("%d", n);
        fun(n-1);
        fun(n-1);
    }
}
```

### Indirect Recursion

```c
void funA(int n){
    if(n>0){
        printf("%d ", n);
        funB(n-1);
    }
}

void funB(int n){
    if (n>1){
        printf("%d ", n);
        funA(n/2);
    }
}
```

### Nested Recursion

```c
int fun(int n){
    if (n>100){
        return n-10;
    else{
        return fun(fun(n+11));
    }
    }
}
```

### Sum of Natural Number using recursion

```
Sum(n) = 1+2+3+4+5+6+...+(n+1)+n
Sum(n) = Sum(n-1)+n
Sum(n) = {0, if n = 0
         {Sum(n-1)+n, if n>0
```

- Sum using recursion

```c
int Sum(int n){
    if(n==0){
        return 0;
    } else {
        return Sum(n-1)+n;
    }
}
```

 - Sum using loop

 ```c
int Sum(int n){
    int i, s=0;
    for(i=1; i<=n;i++){
        s += i;
    }
    return s;
}
```

- Sum using gauss function

```c
int Sum(int n){
    return (n * (n+1))/2;
}
```

### Factorial of a Number
```
n! = 1*2*3*4*...*n
fact(n) = 1*2*3*...*(n-1)*n
fact(n) = fact(n-1)*n
fact(n) = {1, if n = 0
          {fact(n-1)*n, if n > 0
```

- Factorial using recursion

```c
int fact(int n){
    if(n==0){
        return 1;
    } else {
        return fact(n-1)*n;
    }
}
```

### Power using recursion

```
2⁵ = 2*2*2*2*2

pow(m,n) = m*m*m*...*(n-1) times * m
pow(m,n) = pow(m,n-1)*m
pow(m,n) = {1, if n=0
           {pow(m,n-1)*m, if n>0
```

- Expoent with recursion

```c
int pow(int m, int n){
    if(n==0){
        return 1;
    } else {
        pow(m,n-1)*m;
    }
}
```

- Expoent with power function

```c
int pow(int m, int n){
    if(n==0){
        return 1;
    }
    if (n%2==0){
        return pow(m*m, n/2);
    } else {
        return m*pow(m*m, (n-1)/2);
    }
}
```

### Taylor Series using recursion

```
e^x = 1 + (x/1) + (x²/2!) + (x³/3!) + (x⁴/4!) + ... + n terms

Sum(n) = 1+2+3+4+...+n = Sum(n-1)+n
Fact(n) = 1*2*3*4*...*n = Fact(n-1)*n
Pow(x,n) = x*x*x*x*...*n times = pow(x, n-1) * x
```

```c
int e(int x, int n){
    static int P=1; F=1;
    int r;
    if(n==0){
        return 1;
    } else {
        r = e(x, n-1);
        P = P*x;
        F = F*n;
        return r + P/F;
    }
}
```
