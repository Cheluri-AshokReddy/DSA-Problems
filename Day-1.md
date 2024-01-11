# DSA Day-1

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
## Steps to Solve problem
### Initialization (Step 1):

ans is initialized to -1, which will be the default value returned if no modular node is found.
index is set to 1 to keep track of the current position in the linked list.
temp is initialized to the head of the linked list to traverse through it.
### Traversing the Linked List (Step 2):

The while loop iterates through the linked list until the end (temp != null).
#### Checking for Modular Nodes (Step 3):

Inside the loop, it checks if the current index is a multiple of k using the condition index % k == 0.
### Updating the Answer (Step 4):

If the condition is true, it updates the ans variable with the data of the current node (temp.data).
### Moving to the Next Node (Step 5):

Increment the index to move to the next position in the linked list.
Update temp to the next node in the list.
#### Returning the Final Answer (Step 6):

Once the loop is complete, the function returns the final value of ans, which represents the data of the last node whose index is a multiple of k in the linked list.