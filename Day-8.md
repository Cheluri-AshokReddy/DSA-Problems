# DSA Day-8

## Topic: BinaryTree
### Problem statement:Reverse Level Order Traversal
## Solution:
```java
class Tree
{
    public ArrayList<Integer> reverseLevelOrder(Node node) 
    {
        // code here
        ArrayList<Integer>arr=new ArrayList<>();
        Queue<Node>q=new LinkedList<>();
        Stack<Integer>st=new Stack<>();
        q.add(node);
        while(!q.isEmpty()){
            Node temp=q.peek();
            q.remove();
            st.add(temp.data);
            if(temp.right!=null){
                q.add(temp.right);
            }
            if(temp.left!=null){
                q.add(temp.left);
            }
        }
        while(!st.isEmpty()){
            arr.add(st.peek());
            st.pop();
        }
        return arr;
    }
}

```