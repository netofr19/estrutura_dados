#include <stdio.h>

void insert_sort(int array[], int len){
    int swap;

    //Cycle through the entire vector
    for (int i = 1; i < len; i++){
        int next = i;

        // Loop responsible for exchanges
        while((next !=0)&&(array[next] < array[next-1])){
            swap = array[next];
            array[next] = array[next-1];
            array[next-1] = swap;
            next--;
        }
    }
}

int main()
{
    //disordered array
    int array[6] = {8,3,1,42,12,5};

    // Ordenation function utilizing 'insert sort'
    insert_sort(array, 6);

    // Presentation of the ordered vector
    for (int i = 0; i < 6; i++){
        printf("%d\n", array[i]);
    }
    return 0;
}

