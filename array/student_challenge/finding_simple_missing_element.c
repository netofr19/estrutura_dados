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


int main()
{
    int arr[] = {1,2,3,4,6,7,8,9,10};

    printf("The Missing element is: %d\n", findElement1(arr, 9));
    
    return 0;
}
