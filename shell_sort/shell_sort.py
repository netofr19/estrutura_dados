# Python program for implementation of Shell Sort

def shell_sort(array, n):

    # auxiliary variable
    gap = n//2

    while gap > 0:
        j = gap
        # Check the array in from left to right until the last possible index of j
        while j<n:
            i = j - gap # This will keep help in maintain gap value

            while i >= 0:
                # If value on right side is already greater than left side, we don't do swap else we swap
                if array[i+gap]>array[i]:
                    break
                else:
                    array[i+gap], array[i] = array[i], array[i+gap]

                i = i-gap # To check left side also, if the element present is greater than current element

            j += 1
        gap = gap//2