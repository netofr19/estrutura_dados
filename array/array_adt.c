#include <stdio.h>

struct Array
{
    int A[10];
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

int Get(struct Array arr, int index){
    if(index >= 0 && index < arr.length){
        return arr.A[index];
    }
    return -1;
}

void Set(struct Array *arr, int index, int x){
    if (index >= 0 && index < arr->length){
        arr->A[index] = x;
    }
}

int Max(struct Array arr){
    int max = arr.A[0];
    
    for(int i=1; i<arr.length;i++){
        if(arr.A[i]>max){
            max=arr.A[i];
        }
    }

    return max;
}

int Min(struct Array arr){
    int min = arr.A[0];
    
    for(int i=1; i<arr.length;i++){
        if(arr.A[i]<min){
            min=arr.A[i];
        }
    }

    return min;
}

int Sum(struct Array arr){
    int total = 0;

    for (int i = 0; i< arr.length; i++){
        total += arr.A[i];
    }

    return total;
}

float Avg(struct Array arr){
    return (float)Sum(arr)/arr.length;
}

void Reverse(struct Array *arr){
    int *B;
    int i,j;

    B = (int *)malloc(arr->length*sizeof(int));

    for(i=arr->length-1, j=0; i>=0; i--, j++){
        B[j] = arr->A[i];
    }
    for(i=0; i<=arr->length;i++){
        arr->A[i] = B[i];
    }
}

void Reverse2(struct Array *arr){
    int i,j;
    for(i=0, j=arr->length-1; i<j; i++,j--){
        swap(&arr->A[i], &arr->A[j]);
    }
}

void InsertSort(struct Array *arr, int x){
    int i = arr->length-1;
    if(arr->length == arr->size){
        return;
    }
    while(i>=0 && arr->A[i]>x){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}

int isSorted(struct Array arr){
    for(int i=0; i<arr.length-1; i++){
        if(arr.A[i]>arr.A[i+1]){
            return 0;
        }
    }
    return 1;
}

void Rearrange(struct Array *arr){
    int i,j;
    i = 0;
    j = arr->length-1;

    while(i<j){
        while(arr->A[i]<0){
            i++;
        }
        while(arr->A[j]>=0){
            j--;
        }
        if (i<j){
            swap(&arr->A[i], &arr->A[j]);
        }
    }
}

struct Array* Merge(struct Array *arr1, struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++] = arr1->A[i++];
        }
        else {
            arr3->A[k++] = arr2->A[j++];
        }
    }
    for(;i<arr1->length;i++){
        arr3->A[k++] = arr1->A[i];
    }
    for(;j<arr2->length;j++){
        arr3->A[k++] = arr2->A[j];
    }

    arr3->length = (arr1->length) + (arr2->length);
    arr3->size = 10;

    return arr3;
}

struct Array* Union (struct Array *arr1, struct Array *arr2){
    int i, j, k;
    i=j=k=0;

    struct Array *arr3 = (struct Array *)mallor(sizeof(struct Array));

    while(i<arr1->length && j<arr2->length){
        
    }
}

int main()
{
    
    struct Array arr1 = {{2,6,10,15,25}, 10, 5};
    struct Array arr2 = {{3,4,7,18,20}, 10, 5};
    struct Array *arr3;


    // printf("Enter the size of an array: ");
    // scanf("%d", &arr.size);
    
    // arr.A=(int *)malloc(arr.size*sizeof(int));
    // arr.length = 0;

    // printf("Enter number of numbers: ");
    // scanf("%d", &n);

    // for (i=0; i<n; i++){
    //     printf("Enter the element %d of the array: ", i);
    //     scanf("%d", &arr.A[i]);
    //     arr.length += 1;
    // }

    // // Append
    // Display(arr);
    // Append(&arr, 10);
    // printf("\n");

    // // Insert
    // Display(arr);
    // Insert(&arr, 4,20);
    // printf("\n");

    // // Delete
    // Display(arr);
    // int del_array = Delete(&arr, 4);
    // printf("Value deleted: %d\n", del_array);
    // Display(arr);
    // printf("\n");

    // // Linear Search
    // printf("Linear Search of %d: %d\n", 5, LinearSearch(&arr, 5));
    // printf("\n");

    // // Binary Search
    // printf("Binary Search of %d: %d\n", 5, BinarySearch(arr, 5));
    // printf("\n");

    // // Recursive Binary Search
    // printf("Recursive Binary Search of %d: %d\n", 5, RecursionBinarySearch(arr.A, 0, arr.length, 5));
    // printf("\n");

    // //Get
    // printf("Get of the index %d: %d\n", 2, Get(arr, 2));
    // printf("\n");

    // //Set
    // Set(&arr, 0, 15);
    // Display(arr);
    // printf("\n");

    // //Max
    // printf("Max of the array: %d\n", Max(arr));

    // //Sum
    // printf("Sum of the array: %d\n", Sum(arr));

    // //Avg
    // printf("Average of the array: %f\n", Avg(arr));
    // printf("\n");

    // //Reverse
    // Reverse(&arr);
    // Display(arr);
    // printf("\n");

    // //Check if sorted
    // printf("Is sorted: %d\n", isSorted(arr));
    // Display(arr);
    // printf("\n");

    // Rearrange positive and negative values
    // Rearrange(&arr);
    // Display(arr);
    // printf("\n");

    // Merge of arrays
    arr3=Merge(&arr1, &arr2);
    Display(*arr3);
    
    return 0;
}
