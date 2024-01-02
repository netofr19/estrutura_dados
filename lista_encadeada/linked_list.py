# This code build a implementation of a Linked list

class Node:
    def __init__(self, data) -> None:
        self.data = data # The input of data
        self.next = None # given the next to None

class Linked_List:
    def __init__(self) -> None:
        self.Head = None # Initialize the Head to None

    def insert_tail(self, data):
        if (self.Head is None):
            self.insert_head(data)
        else:
            temp = self.Head
            while(temp.next != None):
                temp = temp.next
            temp.next = Node(data)

    def insert_head(self, data):
        newNode = Node(data) # Create a new node
        if self.Head != None:
            newNode.next = self.Head # link newNode to head
        self.Head = newNode # make newNode as Head

    def printList(self):
        temp = self.Head
        while temp is not None:
            print(f"-|{temp.data}|-", end="")
            temp = temp.next

    def delete_head(self): # delete from head
        temp = self.Head
        if self.Head != None:
            self.Head = self.Head.next
            temp.next = None
        return temp
    
    def delete_tail(self): # delete from tail
        temp = self.Head
        if self.Head != None:
            if (self.Head.next is None):
                self.Head = None
            else:
                while temp.next.next is not None:
                    temp = temp.next
                temp.next, temp = None, temp.next
        return temp
    
    def isEmpty(self):
        return self.Head is None
    
    def reverse(self):
        prev = None
        current = self.Head

        while current:
            # Store the current node's next node.
            next_node = current.next
            # Make the current node's next point backwards
            current.next = prev
            # Make the previous node be the current node
            prev = current
            # Make the current node the next node (to progress iteration)
            current = next_node
        # Return prev in order to put the head at the end
        self.Head = prev

if __name__ == '__main__':
    A = Linked_List()

