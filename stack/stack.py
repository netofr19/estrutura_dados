# File with implementation of a stack using OOP

class Stack:

    def __init__(self, length):
        self.length = length
        self.top = 0
        self.stack = [0 for _ in range(self.length)]

    def push(self, value):
        if self.top+1 <= self.length:
            self.stack[self.top] = value
            self.top += 1
            self.list_elements()
        else:
            print("\nThe stack is Full!\n")

    def pop(self):
        if self.top > 0:
            self.stack[self.top-1] = 0
            self.top -= 1
            self.list_elements()
        else:
            print("\nThe stack is empty!\n")

    def list_elements(self):
        print("\n============ Current Stack ============")
        for i in self.stack:
            print(f"-|{i}|-", end="")
        print("")
        print(f"Topo: {self.top}\n")

    def clear(self):
        self.stack = [0 for _ in range(self.length)]
        self.top = 0
        print("\nThe stack is empty!\n")
        self.list_elements()



def main_menu():
    print("==== Stack options menu ====")
    print("[1] - Add(push): ")
    print("[2] - Remove(pop): ")
    print("[3] - Show elements: ")
    print("[4] - Clean Stack: ")
    print("[5] - Exit: ")
    opt = int(input("Select an option: "))
    return opt

if __name__ == '__main__':

    print("\n======== Stack generator program ========")
    num = int(input("Please, enter the number of elements in the stack: "))
    print("")

    stack = Stack(num)

    while True:
        opt = main_menu()

        if opt == 1:
            add = int(input("Please, enter the number to add to the stack: "))
            stack.push(add)
        elif opt == 2:
            stack.pop()
        elif opt == 3:
            stack.list_elements()
        elif opt == 4:
            stack.clear()
        elif opt == 5:
            break
        else:
            print("Invalid Option!")