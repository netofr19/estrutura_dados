# File with implementation of a static queue using OOP

class Queue:

    def __init__(self, queue_size):
        """Queue starter"""
        self.queue_size = queue_size
        self.head = 0
        self.tail = 0
        self.queue = []

    def list_elements(self):
        """Method to list all elements in the queue"""
        print("=========== Current Queue ==============")
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
        if self.tail < self.queue_size:
            self.queue.append(num)
            self.tail += 1
            self.list_elements()
        else:
            print("The Queue is Full!")
    
    def remove_element(self):
        """Method for removing elements to the queue"""
        self.queue[self.head] = 0
        self.head += 1
        self.list_elements()

    def clear_queue(self):
        """Method to delete all elements from the Queue"""
        self.queue=[]
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
    num = int(input("Please, enter the number of elements in the list: "))

    queue = Queue(num)

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

    