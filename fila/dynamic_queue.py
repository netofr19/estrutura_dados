#File with implementation of a dynamic queue using OOP

class Queue:
    
    def __init__(self):
        """Queue starter"""
        self.head = 0
        self.tail = 0
        self.queue = []

    def list_elements(self):
        """Method to list all elements in the queue"""
        print("\n=========== Current Queue ==============")
        if len(self.queue) > 0:
            for i in self.queue:
                print(f"|{i}|", end='-')
            print("")
            print(f"Index Head: {self.head}")
            print(f"Index Tail: {self.tail}")
        else:
            print("The Queue is empty!")
        print("")

    def add_element(self, num):
        """Method for adding elements to the queue"""
        self.queue.append(num)
        self.tail += 1
        self.list_elements()

    def remove_element(self):
        """Method for removing elements to the queue"""
        if len(self.queue) > 0:
            self.queue = self.queue[1:]
            self.tail -= 1
            self.list_elements()
        else:
            self.list_elements()

    def clear_queue(self):
        """Method to delete all elements from the Queue"""
        self.queue=[]
        self.head = 0
        self.tail = 0
        self.list_elements()

def main_menu():
    print("==== Queue options menu ====")
    print("[1] - Add(enqueue): ")
    print("[2] - Remove(dequeue): ")
    print("[3] - Show elements: ")
    print("[4] - Clean Queue: ")
    print("[5] - Exit: ")
    opt = int(input("Select an option: "))
    return opt

if __name__ == '__main__':
    print("======== Queue generator program ========")

    queue = Queue()

    while True:
        opt = main_menu()

        if opt == 1:
            add = int(input("Please, enter the number to add to the queue: "))
            queue.add_element(add)
        elif opt == 2:
            queue.remove_element()
        elif opt == 3:
            queue.list_elements()
        elif opt == 4:
            queue.clear_queue()
        elif opt == 5:
            break
        else:
            print("Invalid Option!")
