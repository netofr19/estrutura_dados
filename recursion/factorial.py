# Factorial of n where n>0 using recursion in Python

def fact(n):
    if n < 2:
        return 1
    else:
        return n * fact(n-1)
    
if __name__ == '__main__':
    n=5
    print(f"The factorial of {n} is {fact(n)}")