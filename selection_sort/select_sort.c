#include <stdio.h>

void select_sort(int array[], int len){
    int smaller, swap;

    // Outer loop to pass the entire array
    for (int i =0; i < (len - 1); i++){
        smaller = i;
        // Inner loop to work with the next element
        for (int j = (i+1); j < len; j++){
            if(array[j] < array[smaller]){
                smaller = j;
            }
        }
        // Performing the exchange
        if (i != smaller){
            swap = array[i];
            array[i] = array[smaller];
            array[smaller] = swap;
        }
    }
}

int main()
{
    //disordered array
    int array[6] = {8,3,1,42,12,5};

    // Ordenation function utilizing 'select sort'
    select_sort(array, 6);

    // Presentation of the ordered vector
    for (int i = 0; i < 6; i++){
        printf("%d\n", array[i]);
    }
    return 0;
}
