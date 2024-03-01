#include <stdio.h>

void findDuplicates(int arr[], int length){
    int lastDuplicate = 0;

    for(int i=0; i<length; i++){
        if(arr[i] == arr[i+1] && arr[i] != lastDuplicate){
            printf("%d ", arr[i]);
            lastDuplicate = arr[i];
        }
    }
    printf("\n");
}

void countDuplicates(int arr[], int length){
    for (int i = 0; i<length-1; i++){
        if(arr[i] == arr[i+1]){
            int j = i+1;
            while (arr[j] == arr[i]){
                j++;
            }
            printf("%d is appearing %d times\n", arr[i], j-i);
            i = j-1;
        }
    }
}

int main()
{
    int arr[] = {3,6,8,8,10,12,15,15,15,20};

    findDuplicates(arr, 10);
    countDuplicates(arr,10);
    
    return 0;
}
