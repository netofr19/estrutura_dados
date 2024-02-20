#include <stdio.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    printf("Elements of the array:\n");
    for(i=0; i<arr.length; i++){
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}

void Append(struct Array *arr, int x){
    if(arr->length<arr->size){
        arr->A[arr->length] = x;
        arr->length++;
    } else {
        printf("The array is full! It isn't possible to append a value on the array!\n");
    }
}

void Insert(struct Array *arr, int index, int x){
    int i;
    if (index>=0 && index <= arr->length){
        if (arr->length<arr->size){
            for(i=arr->length; i>index; i--){
            arr->A[i] = arr->A[i-1];
            }
            arr->A[index]=x;
            arr->length++;
        } else{
            printf("The array is full! It isn't possible to insert a value on the array\n");
        }
    } else {
        printf("The index is invalid!\n");
    }
}

int Delete(struct Array *arr, int index){
    int x=0, i;
    if(index>=0 && index<=arr->length){
        x=arr->A[index];
        for(i=index; i<arr->length-1; i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
    }

    return x;
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *arr, int key){
    int i;
    for (i=0; i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}

int BinarySearch(struct Array arr, int key){
    int l, h, mid;
    l = 0;
    h = arr.length - 1;
    
    while(l<=h){
        mid = (l+h)/2;
        if (key == arr.A[mid]){
            return mid;
        } else if (key < arr.A[mid]){
            h = mid-1;
        } else {
            l = mid+1;
        }
    }

    return -1;
}

int RecursionBinarySearch(int a[], int l, int h, int key){
    int mid;

    if(l <= h){
        mid = (l+h)/2;
        if(key==a[mid]){
            return mid;
        } else if (key<a[mid]){
            return RecursionBinarySearch(a, l, mid-1, key);
        } else {
            return RecursionBinarySearch(a, mid+1, h, key);
        }
    }

    return -1;
}

int main()
{
    
    struct Array arr;
    int n,i;
    printf("Enter the size of an array: ");
    scanf("%d", &arr.size);
    
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length = 0;

    printf("Enter number of numbers: ");
    scanf("%d", &n);

    for (i=0; i<n; i++){
        printf("Enter the element %d of the array: ", i);
        scanf("%d", &arr.A[i]);
        arr.length += 1;
    }

    // Append
    Display(arr);
    Append(&arr, 10);
    printf("\n");

    // Insert
    Display(arr);
    Insert(&arr, 4,20);
    printf("\n");

    // Delete
    Display(arr);
    int del_array = Delete(&arr, 4);
    printf("Value deleted: %d\n", del_array);
    Display(arr);
    printf("\n");

    // Linear Search
    printf("Linear Search of %d: %d\n", 5, LinearSearch(&arr, 5));
    Display(arr);
    printf("\n");

    // Binary Search
    printf("Binary Search of %d: %d\n", 5, BinarySearch(arr, 5));
    Display(arr);

    // Recursive Binary Search
    printf("Recursive Binary Search of %d: %d\n", 5, RecursionBinarySearch(arr.A, 0, arr.length, 5));
    Display(arr);

    return 0;
}
