#include <stdio.h>

void bubble_sort(int array[], int len){
    //Auxiliary Variable
    int next = 0;

    // Traverse through all array elements
    for (int i = 0; i < len; i++){
        //Work with the next elements
        for (int j = 0; j < (len-1);j++){
            // The swap takes place
            if (array[j] > array[j+1]){
                next = array[j];
                array[j] = array[j+1];
                array[j+1] = next;
            }
        }
    }
}

int main()
{
    //disordered array
    int array[6] = {8,3,1,42,12,5};

    // Ordenation function utilizing 'bubble sort'
    bubble_sort(array, 6);

    // Presentation of the ordered vector
    for (int i = 0; i < 6; i++){
        printf("%d\n", array[i]);
    }
    return 0;
}