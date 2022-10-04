'''
Python Implementation for Binary Search trees - a binary tree data structure used for searching, inserting, deleting nodes
Time Complexity O(log(n)), Worst Case O(n)
Author: D1Dayer99
'''
class Node():
    '''
    Inorder Tree
    1. Left
    2. Root
    3. Right
    '''
    def __init__(self, data, right=None, left=None): #the root, left and right children
        self.data = data
        self.right = right
        self.left = left

    def insert(self, new_data): #Inorder Insertion
        if self.data:
            if new_data < self.data:
                if self.left == None:
                    self.left = Node(new_data)
                else:
                    self.left.insert(new_data)
            else:
                if self.right == None:
                    self.right = Node(new_data)
                else:
                    self.right.insert(new_data)
        else:
            self.data = new_data
    
    def find_min(self, node):
        temp = node
        while node.left:
            node = node.left
        return node.data

    def remove(self, del_data):
        if self:
            if del_data < self.data:
                if self.left:
                    self.left = self.left.remove(del_data)
            elif del_data > self.data:
                if self.right:
                    self.right = self.remove(del_data)
            else:
                if self.left == None:
                    return self.left
                elif self.right == None:
                    return self.right
                else:
                    temp = self.find_min(self.right)
                    self.data = temp.data
                    self.right = self.right.remove(temp.data)
                    return self
        else:
            return self

    def search(self, search_data):
        if self.data == None:
            print("Not found")
            return
        
        if self.data == search_data:
            print("Found")
            return
        else:
            if search_data < self.data:
                if self.left == None:
                    print("Not found")
                    return
                else:
                    self.left.search(search_data)
            else:
                if self.right == None:
                    print("Not found")
                    return
                else:
                    self.right.search(search_data)

    def inorder_traversal(self, root):
        if root:
            self.inorder_traversal(root.left)
            print(root.data)
            self.inorder_traversal(root.right)




bst1 = Node(5)
bst1.insert(1)
bst1.insert(2)
bst1.insert(3)
bst1.insert(4)
bst1.insert(6)
bst1.insert(7)
bst1.insert(8)
bst1.insert(9)
bst1.insert(10)
bst1.insert(11)
bst1.insert(12)
bst1.insert(13)
bst1.insert(14)
bst1.insert(15)
bst1.insert(16)
bst1.insert(17)

bst1.inorder_traversal(bst1)
