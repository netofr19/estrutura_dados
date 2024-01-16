# Python program for implementation of Selection Sort

def select_sort(array):

    # Traverse through all array elements
    for i in range(len(array)):

        # Find the minimum element in remaining unsorted array
        min_idx = i
        for j in range(i+1, len(array)):
            if array[j] < array[min_idx]:
                min_idx = j

        # Swap the found minimum element with the first element
        array[i], array[min_idx] = array[min_idx], array[i]


if __name__ == '__main__':
    # Code to test the selection sort
    length = int(input("Please, input the number of elements in the array: "))
    array = []
    for i in range(length):
        element = int(input(f"Element {i+1} in the array: "))
        array.append(element)

    print("")
    print("Unsortered Array")
    [print(i, end=" ") for i in array]
    print("\n")
    print("Sortered Array")
    select_sort(array)
    [print(i, end=" ") for i in array]

