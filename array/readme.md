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
