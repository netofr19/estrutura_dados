# Practive Question 01 - Recursion

def fun1(x, y):

    if (x==0):
        return y
    else:
        return fun1(x-1, x+y)
    
if __name__ == "__main__":
    x=5
    y=10
    result = fun1(x,y)
    print(f"The result of fun1 is: {result}")

# The function fun1() calculates and returns ((1+2+...+(x-1)+x)+y), which is x(x+1)/2 + y. For examples, if x is 5 and y is 10, then fun1 should return 15 + 10 = 25.