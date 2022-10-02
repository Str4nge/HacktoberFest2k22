# Construct an ancestor matrix from a binary tree
# Given a binary tree whose nodes are labeled from 0 to N-1, construct an N × N ancestor matrix. An ancestor matrix is a boolean matrix, whose cell (i, j) is true if i is an ancestor of j in the binary tree.

# For example, consider the following binary tree:

# Binary Tree

 
# The output should be the following ancestor matrix

#   0  0  0  0  0  0
#   0  0  0  0  0  1
#   0  0  0  0  0  0
#   1  0  1  0  0  0
#   1  1  1  1  0  1
#   0  0  0  0  0  0

# A class to store a binary tree node
class Node:
    # Constructor
    def __init__(self, data, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right
 
 
# Recursive function to calculate the size of the binary tree
def size(root):
    # base case
    if root is None:
        return 0
 
    return size(root.left) + 1 + size(root.right)
 
 
# Traverse the tree in a preorder fashion and update the ancestors of
# all nodes in the ancestor matrix
def constructAncestorMatrix(root, ancestors, ancestorMatrix):
 
    # base case
    if root is None:
        return
 
    # update all ancestors of the current node
    for node in ancestors:
        ancestorMatrix[node.data][root.data] = 1
 
    # add the current node to the set of ancestors
    ancestors.add(root)
 
    # recur for the left and right subtree
    constructAncestorMatrix(root.left, ancestors, ancestorMatrix)
    constructAncestorMatrix(root.right, ancestors, ancestorMatrix)
 
    # remove the current node from the set of ancestors since all
    # descendants of the current node are already processed
    ancestors.remove(root)
 
 
# Function to construct an ancestor matrix from a given binary tree
def construct(root):
 
    # calculate the size of the binary tree
    n = size(root)
 
    # create an ancestor matrix of size `n × n`, initialized by 0
    ancestorMatrix = [[0 for x in range(n)] for y in range(n)]
 
    # stores ancestors of a node
    ancestors = set()
 
    # construct the ancestor matrix
    constructAncestorMatrix(root, ancestors, ancestorMatrix)
 
    return ancestorMatrix
 
 
if __name__ == '__main__':
 
    ''' Construct the following tree
             4
           /   \
          3     1
         / \     \
        2   0     5
    '''
 
    root = Node(4)
    root.left = Node(3)
    root.right = Node(1)
    root.left.left = Node(2)
    root.left.right = Node(0)
    root.right.right = Node(5)
 
    # construct the ancestor matrix
    ancestorMatrix = construct(root)
 
    # print the ancestor matrix
    for row in ancestorMatrix:
        print(row)
