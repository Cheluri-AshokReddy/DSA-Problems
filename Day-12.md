# DSA Day-Day-12

## Topic: HashMap
### Problem statement: Contains Duplicate II
## Solution:
```java
class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
       HashMap<Integer,Integer>mp=new LinkedHashMap<>();
       
       for(int i=0;i<nums.length;i++){
           int x=nums[i];
           if(mp.containsKey(x) && Math.abs(i-mp.get(x))<=k)
           return true;
           else{
               mp.put(x,i);
           }
       }
       return false;
    }
}

```
