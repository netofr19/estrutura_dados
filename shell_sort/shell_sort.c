#include <stdio.h>

void shell_sort(int array[], int size){
    //auxiliary variable
    int group = 1;

    // Generate the group size according the array size
    while(group < size){
        group = 3 * group + 1;
    }

    //Iterate the array as long as there are groups to sort
    while(group > 1){
        // Divide the group in 3 parts
        group /= 3;

        //iterate in each group
        for (int i = group; i < size; i++){
            int swap = array[i];
            int j = i - group;

            //Make the swap
            while(j >= 0 && swap < array[j]){
                array[j+group] = array[j];
                j -= group;
            }
            array[j+group] = swap;
        }
    }
}

int main()
{
    //disordered array
    int array[6] = {8,3,1,42,12,5};

    // Ordenation function utilizing 'shell sort'
    shell_sort(array, 6);

    // Presentation of the ordered vector
    for (int i = 0; i < 6; i++){
        printf("%d\n", array[i]);
    }
    return 0;
}