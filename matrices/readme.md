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

## Lower Triangular Matrix

```
    [a11  0   0   0   0 ]
    [a21 a22  0   0   0 ]
M = [a31 a32 a33  0   0 ]  M[i,j] = 0, if i<j
    [a41 a42 a43 a44  0 ]  M[i,j] != 0, if i>=j
    [a51 a52 a53 a54 a55]

    non-zero = 1+2+3+...+n = (n(n+1))/2
    zero = n^2 - (n(n+1))/2

    A = | a11 | a21 | a22 | a31 | a32 | a33 | a41 | a42 | a43 | a44 | a51 | a52 | a53 | a54 | a55 |
        |Row1 |== Row2 == |===== Row 3 =====|======= Row 4 =========|=========== Row 5 ===========|

    Index(A[4][5]) = [1+2+3]+2 = 8
    Index(A[5][4]) = [1+2+3+4]+3 = 13
    Index(A[i][j]) = [i(i-1)/2]+j-1
```