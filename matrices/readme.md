# Matrices

## Diagonal Matrix

```
    [3 0 0 0 0]
    [0 7 0 0 0]
M = [0 0 4 0 0]  A = [3, 7, 4, 9, 6]
    [0 0 0 9 0]
    [0 0 0 0 6]

    M[i,j] = 0, if i != j
    M[i,j] = A[i-1], if i == j
```

```c

void set(int A[], int i, int j, int x){
    if (i==j){
        A[i-1] = x;
    }
}

int get(int A[], int i, int j){
    if (i == j){
        return A[i-1];
    } else {
        return 0;
    }
}

int main(){

    int A[5];

    return 0;
}
```