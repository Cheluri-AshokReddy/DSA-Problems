# DSA Day-6

## Topic:HashMap
### Problem statement:Unique Number of Occurrences
## Solution:
```java
class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        HashMap<Integer,Integer>mp=new LinkedHashMap<>();
        for(int i:arr){
            mp.put(i,mp.getOrDefault(i,0)+1);
        }
        ArrayList<Integer>ar=new ArrayList<>();
        for(Map.Entry<Integer,Integer>entry:mp.entrySet()){
            ar.add(entry.getValue());
        }
        Collections.sort(ar);
        for(int i=0;i<ar.size()-1;i++){
            if(ar.get(i)==ar.get(i+1))
            return false;
        }
        return true;
    }
}

```

