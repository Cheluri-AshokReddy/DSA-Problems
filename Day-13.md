# DSA Day-Day-13

## Topic:String
### Problem statement:Remove Trailing Zeros From a String
## Solution:
```java
class Solution {
    public String removeTrailingZeros(String num) {
        int i=num.length()-1;
        for(;i>=0;i--){
            char x=num.charAt(i);
            if(x!='0'){
                break;
            }
        }
        StringBuilder str=new StringBuilder();
        for(int j=0;j<=i;j++){
            str.append(num.charAt(j));
        }
        return str.toString();
    }
}

```
