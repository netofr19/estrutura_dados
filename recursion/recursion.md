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

