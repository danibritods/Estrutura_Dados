""" Modificando a TAD árvore para trabalhar com listas sendo o primeiro elemento [0] o ordenador"""
# Author: OMKAR PATHAK

# This program illustrates an example of Binary Search Tree using Python
# Binary Search Tree, is a node-based binary tree data structure which has the following properties:
#
# The left subtree of a node contains only nodes with keys less than the node’s key.
# The right subtree of a node contains only nodes with keys greater than the node’s key.
# The left and right subtree each must also be a binary search tree.
# There must be no duplicate nodes.

class Node(object):
    def __init__(self, data):
        if type(data) != list:
            data = [data]
        self.data = data
        self.leftChild = None
        self.rightChild = None

    def insert(self, data):
        ''' For inserting the data in the Tree '''
        if type(data) != list:
            data = [data]
        if self.data[0] == data[0]:
            return False        # As BST cannot contain duplicate data

        elif data[0] < self.data[0]:
            ''' Data less than the root data is placed to the left of the root '''
            if self.leftChild:
                return self.leftChild.insert(data)
            else:
                self.leftChild = Node(data)
                return True

        else:
            ''' Data greater than the root data is placed to the right of the root '''
            if self.rightChild:
                return self.rightChild.insert(data)
            else:
                self.rightChild = Node(data)
                return True

    def minValueNode(self, node):
        current = node

        # loop down to find the leftmost leaf
        while(current.leftChild is not None):
            current = current.leftChild

        return current

    def maxValueNode(self, node):
        current = node

        # loop down to find the leftmost leaf
        while(current.rightChild is not None):
            current = current.rightChild

        return current


    def delete(self, data,root):
        ''' For deleting the node '''
        if type(data) != list:
            data = [data]
        if self is None:
            return None

        # if current node's data is less than that of root node, then only search in left subtree else right subtree
        if data[0] < self.data[0]:
            self.leftChild = self.leftChild.delete(data,root)
        elif data[0] > self.data[0]:
            self.rightChild = self.rightChild.delete(data,root)
        else:
            # deleting node with one child
            if self.leftChild is None:

                if self == root:
                    temp = self.minValueNode(self.rightChild)
                    self.data = temp.data
                    self.rightChild = self.rightChild.delete(temp.data,root) 

                temp = self.rightChild
                self = None
                return temp
            elif self.rightChild is None:

                if self == root:
                    temp = self.maxValueNode(self.leftChild)
                    self.data = temp.data
                    self.leftChild = self.leftChild.delete(temp.data,root) 

                temp = self.leftChild
                self = None
                return temp

            # deleting node with two children
            # first get the inorder successor
            temp = self.minValueNode(self.rightChild)
            self.data = temp.data
            self.rightChild = self.rightChild.delete(temp.data,root)

        return self

    def find(self, data):
        ''' This function checks whether the specified data is in tree or not '''
        if type(data) != list:
            data = [data]
        if(data[0] == self.data[0]):
            return True
        elif(data[0] < self.data[0]):
            if self.leftChild:
                return self.leftChild.find(data)
            else:
                return False
        else:
            if self.rightChild:
                return self.rightChild.find(data)
            else:
                return False

    def preorder(self):
        '''For preorder traversal of the BST '''
        if self:
            print(str(self.data), end = ' ')
            if self.leftChild:
                self.leftChild.preorder()
            if self.rightChild:
                self.rightChild.preorder()

    def inorder(self):
        ''' For Inorder traversal of the BST '''
        if self:
            if self.leftChild:
                self.leftChild.inorder()
            print(str(self.data), end = ' ')
            if self.rightChild:
                self.rightChild.inorder()

    def postorder(self):
        ''' For postorder traversal of the BST '''
        if self:
            if self.leftChild:
                self.leftChild.postorder()
            if self.rightChild:
                self.rightChild.postorder()
            print(str(self.data), end = ' ')

class Tree(object):
    def __init__(self):
        self.root = None

    def insert(self, data):
        if self.root:
            return self.root.insert(data)
        else:
            self.root = Node(data)
            return True

    def delete(self, data):
        if self.root is not None:
            return self.root.delete(data,self.root)

    def find(self, data):
        if self.root:
            return self.root.find(data)
        else:
            return False

    def preorder(self):
        if self.root is not None:
            print()
            print('Preorder: ')
            self.root.preorder()

    def inorder(self):
        print()
        if self.root is not None:
            print('Inorder: ')
            self.root.inorder()

    def postorder(self):
        print()
        if self.root is not None:
            print('Postorder: ')
            self.root.postorder()

if __name__ == '__main__':
    tree = Tree()
    tree.insert(10)
    tree.insert(12)
    tree.insert(5)
    tree.insert(4)
    tree.insert(20)
    tree.insert(8)
    tree.insert(7)
    tree.insert(15)
    tree.insert(13)
    print(tree.find(1))
    print(tree.find(12))
    ''' Following tree is getting created:
                    10
                 /      \
               5         12
              / \           \
            4     8          20
                 /          /
                7         15
                         /
                       13
    '''

    tree.preorder()
    tree.inorder()
    tree.postorder()
    print('\n\nAfter deleting 20')
    tree.delete(20)
    tree.inorder()
    tree.preorder()
    print('\n\nAfter deleting 10')
    tree.delete(10)
    tree.inorder()
    tree.preorder()

letters_values = {"A":7,"B":2, "C":2, "D":3,"E":11,"F":2,"G":2,"H":6,"I":6,"J":1,"K":1,"L":4,"M":3,"N":7,"O":8,"P":2,"Q":1,"R":6,"S":6,"T":8,"U":4,"V":1,"W":2,"X":1,"Y":2,"Z":1}
#dict(sorted(letters_values.items(), key=lambda item: item[1]))
letters_list = sorted([[v,k] for k,v in letters_values.items()] ,key=lambda x:x[0])
tree_list = [Node(element) for element in letters_list]
#print(tree_list)

#print(letters_list)
while len(tree_list) > 0:
    nodeLeft = tree_list.pop(0)
    nodeRight = tree_list.pop(0)
    frequency_acc = nodeLeft.data[0] + nodeRight.data[0]
    root = Node([frequency_acc])
    root.leftChild = nodeLeft
    root.rightChild = nodeRight
    i = 0 
    #print(tree_list[i].data[0],root.data[0])
    while (tree_list[i].data[0] < root.data[0]) and i+1<len(tree_list):
        i = i + 1
        print(i, end=' ')
    print()
    tree_list.insert(i, root)
    print(root.data,"i:",i,"len:",len(tree_list))
