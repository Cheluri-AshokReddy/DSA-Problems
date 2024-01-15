# DSA Day-4

## Topic:HashMap
### Problem statement: Count the characters
## Solution:
```C++
        int getCount (string S, int N)
        {
            
              map<char,int>s;
            for(int i=0;i<S.size();i++){
                if(S[i]!=S[i-1])
                s[S[i]]++;
            }
            int c=0;
            for(auto x:s){
                if(x.second==N)
                c++;
            }
            return c;
        }



```
