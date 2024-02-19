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

    return 0;
}
