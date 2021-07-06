class Node:
    def __init__(self, data):
        self.left = None
        self.data = data
        self.right = None

    def insert(self, data):
        if self.root:
            self = self.root 

        if self.data:
            if data < self.data:
                if self.left is None:
                    self.left = Node(data)
                else:
                    self.left.insert(data)
            elif data > self.data:
                if self.right is None:
                    self.right = Node(data)
                else:
                    self.right.insert(data)
        else:
            self.data = data

class Tree:
    class Node:
        def __init__(self, data):
            self.left = None
            self.data = data
            self.right = None

    def CreateNode(self, data):
        return Node(data)

    def __init__(self, data=None):
        self.root = Node(data)

    def insert(self, data):
        if self.root:
            self = self.root 

        if self.data:
            if data < self.data:
                if self.left is None:
                    self.left = Node(data)
                else:
                    self.left.insert(data)
            elif data > self.data:
                if self.right is None:
                    self.right = Node(data)
                else:
                    self.right.insert(data)
        else:
            self.data = data
        
    reader.read

a = Tree()
a.insert(3)
a.insert(4)
a.insert(6)
a.insert(8)
 
 









 """Estrutura vinda de: https://stackoverflow.com/a/29531977/15275978 """
class Node:
    """
    Class Node
    """
    def __init__(self, value):
        self.left = None
        self.data = value
        self.right = None

class Tree:
    """
    Class tree will provide a tree as well as utility functions.
    """

    def createNode(self, data):
        """
        Utility function to create a node.
        """
        return Node(data)

    def insert(self, node , data):
        """
        Insert function will insert a node into tree.
        Duplicate keys are not allowed.
        """
        #if tree is empty , return a root node
        if node is None:
            return self.createNode(data)
        # if data is smaller than parent , insert it into left side
        if data < node.data:
            node.left = self.insert(node.left, data)
        elif data > node.data:
            node.right = self.insert(node.right, data)

        return node


    def search(self, node, data):
        """
        Search function will search a node into tree.
        """
        # if root is None or root is the search data.
        if node is None or node.data == data:
            return node

        if node.data < data:
            return self.search(node.right, data)
        else:
            return self.search(node.left, data)

    def deleteNode(self,node,data):
        """
        Delete function will delete a node into tree.
        Not complete , may need some more scenarion that we can handle
        Now it is handling only leaf.
        """

        # Check if tree is empty.
        if node is None:
            return None

        # searching key into BST.
        if data < node.data:
            node.left = self.deleteNode(node.left, data)
        elif data > node.data:
            node.right = self.deleteNode(node.right, data)
        else: # reach to the node that need to delete from BST.
            if node.left is None and node.right is None:
                del node
            if node.left == None:
                temp = node.right
                del node
                return  temp
            elif node.right == None:
                temp = node.left
                del node
                return temp

        return node

    def traverseInorder(self, root):
        """
        traverse function will print all the node in the tree.
        """
        res = []
        if root is not None:
            res = self.traverseInorder(root.left)
            #print(root.data)
            res.append(root.data)
            res = res + self.traverseInorder(root.right)
        return res

    def traversePreorder(self, root):
        """
        traverse function will print all the node in the tree.
        """
        res = []
        if root is not None:
            #print(root.data)
            res.append(root.data)
            res = res + self.traversePreorder(root.left)
            res = res + self.traversePreorder(root.right)
        return res 

    def traversePostorder(self, root):
        """
        traverse function will print all the node in the tree.
        """
        res = []
        if root is not None:
            res = self.traversePostorder(root.left)
            res = self.traversePostorder(root.right)
            #print(root.data)
            res.append(root.data)
        return res


def main():
    root = None
    tree = Tree()
    root = tree.insert(root, 5)
    tree.insert(root, 20)
    tree.insert(root, 30)
    tree.insert(root, 32)
    tree.insert(root, 70)
    tree.insert(root, 2)
    tree.insert(root, 80)
   # tree.deleteNode(root, 80)
  #  tree.deleteNode(root, 80)

    print("Traverse Inorder")
    print(tree.traverseInorder(root))

    print("Traverse Preorder")
    print(tree.traversePreorder(root))

    print("Traverse Postorder")
    print(tree.traversePostorder(root))
main()
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    def traverseInorder(self, root):
        """
        traverse function will print all the node in the tree.
        """
        if root is not None:
            self.traverseInorder(root.left)
            print(root.data)
            self.traverseInorder(root.right)
# Inorder traversal
# Left -> Root -> Right
    def inorderTraversal(self, root):
        res = []
        if root:
            res = self.inorderTraversal(root.left)
            res.append(root.data)
            res = res + self.inorderTraversal(root.right)
        return res
-------------------------------------------------------------
    def traversePreorder(self, root):
        """
        traverse function will print all the node in the tree.
        """
        if root is not None:
            print(root.data)
            self.traversePreorder(root.left)
            self.traversePreorder(root.right)
# Preorder traversal
# Root -> Left ->Right
    def PreorderTraversal(self, root):
        res = []
        if root:
            res.append(root.data)
            res = res + self.PreorderTraversal(root.left)
            res = res + self.PreorderTraversal(root.right)
        return res
------------------------------------------------------------------
    def traversePostorder(self, root):
        """
        traverse function will print all the node in the tree.
        """
        if root is not None:
            self.traversePostorder(root.left)
            self.traversePostorder(root.right)
            print(root.data)
# Postorder traversal
# Left ->Right -> Root
    def PostorderTraversal(self, root):
        res = []
        if root:
            res = self.Postord erTraversal(root.left)
            res = res + self.PostorderTraversal(root.right)
            res.append(root.data)
        return res
