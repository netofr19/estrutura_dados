# Fibonacci series in Python using recursion

def fiboFun(n):

    if n<2:
        return n
    else:
        return (fiboFun(n-1) + fiboFun(n-2))
    
if __name__ == "__main__":
    n = 6
    print(f"Fibonacci series of {n} numbers is:", end=" ")
    for i in range(0, n):
        print(fiboFun(i), end=" ")