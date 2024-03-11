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

    Index(A[4][5]) = [5+4+3]+1 = 13
    Index(A[i][j]) = [(i-1)*n - ((i-2)(i-1))/2]+(j-i)
```

## Upper Triangular Matrix

```
    [a11  a12   a13   a14   a15 ]
    [ 0   a22   a23   a24   a25 ]
M = [ 0    0    a33   a34   a35 ]  M[i,j] = 0, if i>j
    [ 0    0     0    a44   a45 ]  M[i,j] != 0, if i<=j
    [ 0    0     0     0    a55 ]

    non-zero = 1+2+3+...+n = (n(n+1))/2
    zero = (n(n-1))/2

    Index(A[4][5]) = [1+2+3]+2 = 8
    Index(A[5][4]) = [1+2+3+4]+3 = 13
    Index(A[i][j]) = [i(i-1)/2]+j-1
```

## Symmetric Matrix

```
    [ a11    a12    a13    a14    a15 ]
    [ a21    a22    a23    a24    a25 ]
M = [ a31    a32    a33    a34    a35 ] 
    [ a41    a42    a43    a44    a45 ]  
    [ a51    a52    a53    a54    a55 ]

    if M[i, j] = M[j, i] -> Symmetric Matrix
```

## Tridiagonal Matrix

```
    [ a11    a12     0      0      0  ]
    [ a21    a22    a23     0      0  ]
M = [ a31    a32    a33    a34     0  ] 
    [  0      0     a43    a44    a45 ]  
    [  0      0      0     a54    a55 ]

    Main Diagonal -> i-j = 0;
    Lower Diagonal -> i - j = 1
    Upper Diagonal -> i - j = -1

    M[i,j] != 0, if |i-j| <= 1
    M[i, j] == 0, if |i-j| > 1

    Index(A[i][j]){
        case 01: if i-j=1, index = i-1
        case 02: if i-j=0, index = n-1+i-j
        case 03: if i-j=-1, index = 2n-1
    }
```
