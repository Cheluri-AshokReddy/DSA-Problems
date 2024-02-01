# DSA Day-14

## Topic:HashMap
### Problem statement: Count Elements With Maximum Frequency
## Solution:
```java
class Solution {
    public int maxFrequencyElements(int[] nums) {
        HashMap<Integer,Integer>mp=new HashMap<>();
        for(int i:nums){
            mp.put(i,mp.getOrDefault(i,0)+1);
        }
        int max=0;
        for(Map.Entry<Integer,Integer>entry:mp.entrySet()){
            max=Math.max(max,entry.getValue());
        }
        int sum=0;
        for(Map.Entry<Integer,Integer>entry:mp.entrySet()){
            if(entry.getValue()==max)
            sum+=entry.getValue();
        }
        return sum;
    }
}

```
