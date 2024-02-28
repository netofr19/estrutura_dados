#include <stdio.h>
#include <stdlib.h>

int* findMultipleElements1(int arr[], int length){
    int *aux = (int *)malloc(length*sizeof(int));
    int index = 0;
    int diff = arr[0] - 0;

    for(int i = 0; i<length;i++){
        if(arr[i]-i != diff){
            while(diff < arr[i]-i){
                aux[index] = i+diff;
                index++;
                diff++;
            }
        }
    }

    return aux;
}

int main()
{
    int arr[] = {6,7,8,9,11,12,15,16,17,18,19};

    int *missing_values = findMultipleElements1(arr, 11);

    for(int i = 0; i<3; i++){
        printf("%d ", missing_values[i]);
    }
    printf("\n");

    free(missing_values);

}
