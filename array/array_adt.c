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

    Display(arr);

    Append(&arr, 10);

    Display(arr);

    Insert(&arr, 4,20);

    Display(arr);

    int del_array = Delete(&arr, 4);
    printf("Value deleted: %d\n", del_array);

    Display(arr);

    return 0;
}
