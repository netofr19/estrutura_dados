#include <stdio.h>

void finMinMax(int arr[], int length){
    int min = arr[0];
    int max = arr[0];

    for (int i=0; i<length; i++){
        if(arr[i]<min){
            min = arr[i];
        }

        if(arr[i]>max){
            max = arr[i];
        }
    }

    printf("The minimum value of the array is: %d\n", min);
    printf("The maximum value of the array is: %d\n", max);
}

int main()
{
    int arr[] = {5,8,3,9,6,2,10,7,-1,4};

    finMinMax(arr, 10);
    
    return 0;
}
