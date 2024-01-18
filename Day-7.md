# DSA Day-

## Topic:BinaryTree
### Problem statement:Max and min element in Binary Tree
## Solution:
```java
class Solution{
    public static void tree(Node root,ArrayList<Integer>arr){
        if(root==null)
        return;
        tree(root.left,arr);
        arr.add(root.data);
        tree(root.right,arr);
    }
    public static int findMax(Node root){
        //code here
        ArrayList<Integer>arr=new ArrayList<>();
        Collections.sort(arr);
        tree(root,arr);
        return arr.get(arr.size()-1);
    }
    public static int findMin(Node root){
        //code here
        ArrayList<Integer>arr=new ArrayList<>();
        Collections.sort(arr);
        tree(root,arr);
        return arr.get(0);
    }
}

```
