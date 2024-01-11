# DSA Day-

## Topic: LinkedList
### Problem statement: Modular Node
## Solution:
```java
class GfG
{
    public static int moduarNode(Node head, int k)
    {
        // add your code here
        int ans=-1;
        int index=1;
        Node temp=head;
        while(temp!=null){
            if(index%k==0){
                ans=temp.data;
            }
            index++;
            temp=temp.next;
        }
        return ans;
    }
}

```

### Theory:
finineinefinnfojnvoe