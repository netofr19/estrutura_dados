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

N-DIMENSION
int A[d1][d2][d3][d4;];

Add(A[i1][i2][i3][i4]) = L0 + [(i1*d2*d3*d4)+(i2*d3*d4)+(i3*d4)+i4]*size_data
Add(A[i1][i2][i3][i4]) = L0 + Sum(ip*Prod(dq))*size_data

- Number of multiplications

4D -> 3+2+1 = 6
5D -> 4+3+2+1 = 10
nD -> (n-1)+(n-2)+...+3+2+1 = (n(n-1))/2 -> O(n²)

3-DIMENSION
int A[l][m][n];

Add(A[i][j][k]) = L0 + [i*m*n + j*n + k]*data_size

```

## Array ADT

```
DATA
1. Array Space;
2. Size;
3. Length (n of elements);

Operations
1. Display();
2. Add(x)/Append(x);
3. Insert(index, x);
4. Delete(index);
5. Search(x);
6. Get(index);
7. Set(index, x);
8. Max()/Min();
9. Reverse();
10. Shift()/Rotate().
```

### 1. Display

```c
void display(Array arr){
    for (int i=0; arr.length; i++){
        printf("%d ", arr.A[i]);
    }
}
    
```

### 2. Add(x)/Append(x)

```c
void add(Array *arr,int x){
    arr->A[arr->length] = x;
    arr->length++;
}
```

### 3. Insert(index, x)

```c
void insert(Array *arr, index, x){
    int i;
    for (i = arr->length; i > index; i--){
        arr->A[i] = arr->A[i-1];
    }
    arr->A[index] = x;
    arr->length++;
}
```

### 4. Delete(index)

```c
void delete(Array *arr, index){
    for (int i=index; i<arr->length-1; i++){
        arr->A[i] = arr->A[i+1];
    }
    arr->length--;
}
```

### 5.1. Linear Search

```c
int linearSearch(Array *arr, key){
    for (int =0; i<arr->length; i++){
        if (key == arr->A[i]){
            return i;
        }
    }
    return -1;
}
```

### 5.2. Binary Search

- The number of comparisons depend of the height of the tree;
 - Best = O(1);
 - Worst = O(logn);

```
For Binary Search, we need three variables:
 - l;
 - h;
 - mid = (l+h)/2;
```

```c
int binarySearch(int l, int h, int key){
    int mid;

    while (l <= h){
        mid = [(l+h)/2];
        if (key == A[mid]){
            return mid;
        } else if (key < A[mid]){
            h = mid-1;
        } else{
            l = mid+1;
        }
    }
    
    return -1;
}

int recursionBinarySearch(int l, int h, int key){
    if (l <= h){
        int mid = [(l+h)/2];
        if (key == A[mid]){
            return mid;
        } else if(key < mid){
            return recursionBinarySearch(l, mid-1, key);
        } else {
            return recursionBinarySearch(mid+1, h, key);
        }
    }
    return -1;
}
```

### 6. Get

```c
int get(int index){
    if(index >= 0 && index < length){
        return A[index];
    }
}
```

### 7. Set

```c
int set(int index, int x){
    if(index >= 0 && index < length){
        A[index] = x;
    }
}
```

### 8. Max

```c
int max(Array A){
    int max = A[0];
    for (int i = 1; i < length; i++){
        if (A[i] > max){
            max = A[i];
        }
    }
    return max;
}
```

### 9. Min

```c
int min(Array A){
    int min = A[0];
    for (int i = 1; i < length; i++){
        if (A[i] < min){
            min = A[i];
        }
    }
    return min;
}
```

### 10. Sum

- Loop:
```c
int sum(Array A){
    int total = 0;
    for(int i = 0; i < length; i++){
        total += A[i];
    }  
    return total;
}
```

- Recursion:
```c
int sum(Array A, int n){
    if (n < 0){
        return 0;
    } else {
        return sum(n-1) + A[n];
    }
}

//call -> sum(A, length-1)
```

### 11. Average
```c
int average(Array A){
    int total = 0;
    for(int i = 0; i < length; i++){
        total += A[i];
    }  
    return total/length;
}
```

### 12. Reverse

```
A = |8|3|9|15|6|10|7|2|12|4|

B = |4|12|2|7|10|6|15|9|3|8| -> reverse

```

```c

void reverse(struct Array *A){
    int B[A.length];
    for (int i = A->length; int j=0; i>=0; i--; j++){
        B[j] = A[i];
    }

    for (int i=0; i<length; i++){
        A[i] = B[i];
    }
}

```

#### 13. Left Shift/Rotate
```
A = |6|3|8|5|9|
A = |3|8|5|9|0| -> left shifted
A = |3|8|5|9|6| -> left rotated
```