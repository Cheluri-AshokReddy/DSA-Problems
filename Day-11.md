# DSA Day-11

## Topic: String
### Problem statement: Add binary strings
## Solution:
```java
import java.util.*;
import java.math.BigInteger;
public class Solution 
{
	public static String addBinaryString(String a, String b, int n, int m)
	{
		// Write your code here.
		BigInteger first=new BigInteger(a,2);
		BigInteger second=new BigInteger(b,2);
		BigInteger sum=first.add(second);
		String str=sum.toString(2);
		return str;
	}
}


```