# Implementing a binary tree in Python

class TreeNode:
    """This is the Class Node with constructor that contains data variable to type data and left, right pointers"""

    def __init__(self, data) -> None:
        self.data = data
        self.left = None
        self.right = None

def createTree(num):
    """This function creates a inicial tree with only one number (root number)"""
    return TreeNode(num)

def checkTree(tree):
    """This function verifies if the tree is empty or not"""
    return tree == None

def showTree(tree, level=0, prefix="Root: "):
    """This function shows the structure of the tree"""
    if not checkTree(tree):
        print(" "*level + prefix + str(tree.data))
        if tree.left or tree.right:
            showTree(tree.left, level+1, "L--- ")
            showTree(tree.right, level+1, "R--- ")
    else:
        print(" " * level + prefix + "Empty")

def insertData(tree, num):
    """This function adds new nodes to the tree"""
    if tree is None:
        return TreeNode(num)
    else:
        if num < tree.data:
            tree.left = insertData(tree.left, num)
        elif num > tree.data:
            tree.right = insertData(tree.right, num)
    return tree

def searchTree(tree, num):
    """This function searches a specific number on the tree"""
    if checkTree(tree):
        return False
    return tree.data == num or searchTree(tree.left, num) or searchTree(tree.right, num)

def verifyDepthTree(tree):
    """This is the recursive function to find the depth of binary tree"""
    if tree is None:
        return 0
    else:
        depth_l_tree = verifyDepthTree(tree.left)
        depth_r_tree = verifyDepthTree(tree.right)
        if depth_l_tree > depth_r_tree:
            return 1 + depth_l_tree
        else:
            return 1 + depth_r_tree
        
def verifyFullBinaryTree(tree):
    if tree is None:
        return True
    if (tree.left is None) and (tree.right is None):
        return True
    if (tree.left is not None) and (tree.right is not None):
        return (verifyFullBinaryTree(tree.left) and verifyFullBinaryTree(tree.right))
    else:
        return False


if __name__ == '__main__':
    tree1= createTree(10)

    insertData(tree1, 6)
    insertData(tree1, 14)
    insertData(tree1, 4)
    insertData(tree1, 8)
    insertData(tree1, 12)
    insertData(tree1, 16)

    showTree(tree1)
    
    print("")
    print(f"Depth of the tree = {verifyDepthTree(tree1)}")

    print("")
    print(f"Is The Tree full binary? {verifyFullBinaryTree(tree1)}")

    print("")
    print(f"Is The number 18 on the tree? {searchTree(tree1, 18)}")

    print("")
    print(f"Is The number 14 on the tree? {searchTree(tree1, 14)}")

    


