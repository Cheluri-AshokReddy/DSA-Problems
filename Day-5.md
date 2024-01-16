# DSA Day-5

## Topic: Tree
### Problem statement:Print all nodes that don't have sibling
## Solution:
```java
class Tree
{
    HashSet<Integer>arr=new HashSet<Integer>();
    void tre(Node root,Node node){
            if(root==null){
                return;
            }
            if(root.left==null && root.right!=null){
                arr.add(root.right.data);
            }else if(root.left!=null && root.right==null){
                arr.add(root.left.data);
            }
        tre(root.left,node);
        tre(root.right,node);
    }
    ArrayList<Integer> noSibling(Node node)
    {
        // code here
        Node temp=node;
        tre(temp,node);
        if(arr.size()==0){
            arr.add(-1);
        }
        ArrayList<Integer>arr1=new ArrayList<>();
        for(int i:arr){
            arr1.add(i);
        }
        Collections.sort(arr1);
        return arr1;
    }
}

```
