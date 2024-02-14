# Example 01 of Recursion in Python
def printFun(value):
    if value < 1:
        return None
    else:
        print(value, end=" ")
        printFun(value-1)
        print(value, end=" ")


if __name__ == '__main__':
    value = 10
    printFun(value)