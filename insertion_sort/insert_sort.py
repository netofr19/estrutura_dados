# Python program for implementation of Insertion Sort, in a ascending or descending way

def insertion_sort(array, cond):

    # Traverse through all array elements
    for i in range(len(array)):

        # Find the actual element in remaining unsorted array
        next = i

        # Loop responsable for swap
        if cond == 'asc':
            while (next > 0) and (array[next] < array[next-1]):
                swap = array[next]
                array[next] = array[next-1]
                array[next-1] = swap
                next -= 1
        elif cond == 'desc':
            while (next > 0) and (array[next] > array[next-1]):
                swap = array[next]
                array[next] = array[next-1]
                array[next-1] = swap
                next -= 1

if __name__ == '__main__':
    # Code to test the insertion sort
    length = int(input("Please, input the number of elements in the array: "))
    cond = input("Please, input the condition of sorting ['asc', 'desc']: ")

    array = []
    for i in range(length):
        element = int(input(f"Element {i+1} in the array: "))
        array.append(element)

    print("")
    print("Unsortered Array")
    [print(i, end=" ") for i in array]
    print("\n")
    print("Sortered Array")
    insertion_sort(array, cond)
    [print(i, end=" ") for i in array]