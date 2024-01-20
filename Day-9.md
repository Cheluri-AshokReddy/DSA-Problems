# DSA Day-9

## Topic: LinkedList
### Problem statement: Remove Duplicates From an Unsorted Linked List
## Solution:
```java
import java.util.* ;
import java.io.*; 

/************************************************************

    Following is the linked list node structure
    
    class LinkedListNode<T> {
    T data;
    LinkedListNode<T> next;

    public LinkedListNode(T data) {
        this.data = data;
    }
}

************************************************************/


public class Solution {
	
	public static LinkedListNode<Integer> removeDuplicates(LinkedListNode<Integer> head) {

        // Write your code here
        if (head == null) {
            return null;
        }

        HashSet<Integer> mp = new LinkedHashSet<>();
        LinkedListNode<Integer> temp = head;

        // Count occurrences of each element
        while (temp != null) {
            mp.add(temp.data);
            temp = temp.next;
        }

       LinkedListNode first=new LinkedListNode(2);
       LinkedListNode second=first;
       for(Integer i:mp){
           LinkedListNode ans=new LinkedListNode(i);
           second.next=ans;
           second=ans;
       }

        return first.next;
	}

}

```
