#include <stdio.h>

int findElement1(int arr[], int length){
    int sum = 0;
    int max_index = length-1;

    for (int i = 0; i<length; i++){
        sum += arr[i];
    }

    int s = (arr[max_index]*(arr[max_index]+1))/2;

    return s-sum;
}

int findElement2(int arr[], int length){
    int diff = arr[0] - 0;
    int missingValue;

    for (int i=0; i<length;i++){
        if (arr[i] - i != diff){
            missingValue = i+diff;
            break;
        }
    }

    return missingValue;
}


int main()
{
    int arr[] = {1,2,3,4,6,7,8,9,10};

    printf("The Missing element using first function is: %d\n", findElement1(arr, 9));

    int arr2[] = {6,7,8,9,10,11,13,14,15,16,17};

    printf("The Missing element using second function is: %d\n", findElement2(arr2, 11));
    
    return 0;
}
