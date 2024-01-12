# DSA Day-2

## Topic: Tree
### Problem statement: Mirror Tree
## Solution:
```java
class Solution {
    Node tree(Node root){
        if(root==null)
        return null;
        
        Node left=tree(root.left);
        Node right=tree(root.right);
        
        root.left=right;
        root.right=left;
        
        return root;
    }
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node node) {
        // Your code here
        Node temp=tree(node);
    }
}

```

### Theory:
## Steps to Solve problem
### Recursive Mirror Function (Step 1):

The tree function is a recursive function that takes a Node (root of a subtree) as input and returns the root of its mirror subtree.
If the input root is null (base case), it returns null.
It recursively calls the tree function on the left and right subtrees.
Swaps the left and right subtrees of the current root.
Returns the root of the mirrored subtree.
### Mirror Function (Step 2):

The mirror function is the main function to convert a binary tree into its mirror.
It takes a Node called node as input (presumably the root of the original tree).
Inside the function, a temporary Node called temp is declared.
### Calling Recursive Mirror Function (Step 3):

The tree function is called with the input node, and its result is stored in the temp variable.
This effectively converts the entire binary tree into its mirror form