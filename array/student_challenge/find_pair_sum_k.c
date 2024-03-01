#include <stdio.h>

void findPair(int arr[], int length, int k){
    for(int i = 0; i<length-1; i++){
        for(int j = i+1; j<length; j++){
            if(arr[i]+arr[j] == k){
                printf("%d + %d = %d\n", arr[i], arr[j], k);
            }
        }
    }
}

int main()
{
    int arr[] = {6,3,8,10,16,7,5,2,9,14};

    findPair(arr, 10, 10);
    
    return 0;
}
