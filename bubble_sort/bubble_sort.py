# Python program for implementation of Bubble Sort, in a ascending or descending way

def bubble_sort(array, cond):

    # Traverse through all array elements
    for i in range(len(array)):
        swapped = False

        if cond == 'asc':
            # Comparison with the next element
            for j in range(len(array)-1):
                if array[j] > array[j+1]:
                    array[j], array[j+1] = array[j+1], array[j]
                    swapped = True
        if cond == 'desc':
            # Comparison with the next element
            for j in range(len(array)-1):
                if array[j] < array[j+1]:
                    array[j], array[j+1] = array[j+1], array[j]
                    swapped = True
        if swapped == False:
            break

            


if __name__ == '__main__':
    # Code to test the Bubble sort
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
    bubble_sort(array, cond)
    [print(i, end=" ") for i in array]