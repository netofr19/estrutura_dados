#include <stdio.h>
#include <stdlib.h>

void findDuplicates(int arr[], int length){
    int max=arr[0];

    // finding the max value
    for(int i=0; i< length; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    //Creation of Hash Table
    int* hash = (int *)malloc(max*sizeof(int));

    //Filling the hash table with zeros
    for (int j=0; j<max; j++){
        hash[j] = 0;
    }

    //Count of duplicate values
    for(int x=0; x<length; x++){
        hash[arr[x]]++;
    }

    // Print the duplicate values
    for(int z=0; z<=max; z++){
        if (hash[z] > 1){
            printf("%d appears %d times in the array\n", z, hash[z]);
        }
    }
}

int main()
{
    
    int arr[] = {3,6,8,8,10,12,15,15,15,20};
    int arr2[] = {8,3,6,4,6,5,6,8,2,7};

    findDuplicates(arr2, 10);

    return 0;
}
