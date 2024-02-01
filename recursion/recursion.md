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
- 