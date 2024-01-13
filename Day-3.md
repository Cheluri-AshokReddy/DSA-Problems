# DSA Day-3

## Topic:Tree
### Problem statement:Count Non-Leaf Nodes in Tree
## Solution:
```java
class Solution
{
    int count=0;
    int tree(Node root){
        if(root==null)
        return 0;
        
        int left=tree(root.left);
        int right=tree(root.right);
        if(left!=0 || right!=0){
            count++;
        }
        
        return 1+Math.max(left,right);
    }
	int countNonLeafNodes(Node root) {
	    //code here
	    int ans=tree(root);
	    
	    return count;
	}
}
```

### Theory:
## Steps to Solve problem
### Recursive Height Calculation Function (Step 1):

The tree function is a recursive function that takes a Node (root of a subtree) as input and returns the height of that subtree.
If the input root is null (base case), it returns 0.
It recursively calls the tree function on the left and right subtrees.
Checks if the current node is a non-leaf node (has at least one child), and if true, increments the count variable.
#### Checking for Non-Leaf Nodes (Step 2):

Inside the tree function, there is a check to see if the current node is a non-leaf node. If either the left or right subtree has a height greater than 0, it means the current node is a non-leaf node, and the count is incremented.
#### Returning the Height of the Subtree (Step 3):

The function returns the height of the current subtree, which is calculated as 1 + Math.max(left, right).
### Main Function (Step 4):

The countNonLeafNodes function is the main function to count non-leaf nodes in the binary tree.
It takes a Node called root as input (presumably the root of the binary tree).
#### Calling Recursive Function (Step 5):

The tree function is called with the input root, and its result is stored in the ans variable. This call not only calculates the height but also increments the count for non-leaf nodes.
### Returning the Final Count (Step 6):

The final count of non-leaf nodes is returned as the result of the countNonLeafNodes function.