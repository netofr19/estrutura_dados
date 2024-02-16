# Arrays

- Group of similar elements;

```
scalar -> int x = 10;
vector -> A[5];
```
## Declaration of arrays

```
int A[5]; -> declaration
int A={2,4,6,8,10};    A =|2|4|6|8|10| -> inicialization
```

## Static vs Dynamic Array

- Size of an array can be decided at runtime in C++;
- In C language, it has to be mentioned the size of the array at compiled time only;

```cpp
void main(){
    int A[5]; // C language

    int n; // C++ language
    cin>>n;
    int B[n];
}
```

### How to create an array inside heap:

```cpp
void main(){
    int A[5]; 
    int *p;
    p = new int B[5]; //C++ language

    p = (int *)malloc(5*sizeof(int)); // C language

    delete []p; //C++ language
    free(p); //C language
}
```

### How to access that array from heap:

```cpp
void main(){
    int A[5]; 
    int *p;
    p = new int B[5]; //C++ language

    A[0]=5; //Stack
    p[0]=5; //Heap
}
```

### How to increase array size in heap:

```cpp

int *p = new int[5];

int *q = new int[10];

for (int i=0; i<5; i++){
    q[i] = p[i];
}

delete []p;

p=q;

q = NULL;

```

## 2D Array

```cpp
// first method -> Totally in stack
int A[3][4];

// second method -> Partially in heap
int *A[3];
A[0] = new int[4];
A[1] = new int[4];
A[2] = new int[4];

//third method -> Totally in heap
int **A;
A = new int*[3];
A[0] = new int[4];
A[1] = new int[4];
A[2] = new int[4];
```

## Arrays in Compilers

```
1-DIMENSION
int A[5] = {3,5,8,4,2};

     0/1 2/3 4/5 6/7 8/9
A = | 3 | 5 | 8 | 4 | 2 |
ind=  0   1   2   3   4

A[3] = 10;
Add(A[3]) = 0 +3*2 = 6
Add(A[3]) = L0 + 3 * 2
Add(A[3]) = base_address + index * size of data type

2-DIMENSIONS
int A[3][4] -> A[m][n];

    ___ first row__  _ second row __ _ third row ___
      0   1   2   3   4   5   6   7   8   9  10  11
A = |a00|a01|a02|a03|a10|a11|a12|a13|a20|a21|a22|a23
     0/1 2/3 4/5 6/7 8/9 10  12  14  16  18  20  22/23


A[1][2] = 10;
Add(A[1][2]) = 0 + [1*4+2] * 2;
Add(A[1][2]) = 0 + 6*2 = 12;
Add(A[2][3]) = 0 + [2*4+3]*2 = 22;

Add[A[i][j]] = L0 + [i*n + j] *size_data


```