# DSA Day-16

## Topic:Dynamic progreaming
### Problem statement:Minimum Cost To Make Two Strings Identical
## Solution:
```java
class Solution
{
	public int findMinCost(String X, String Y, int costX, int costY)
	{
		// Your code goes here
		int n=X.length();
		int m=Y.length();
		int dp[][]=new int[n+1][m+1];
		for(int i=0;i<=n;i++){
		    for(int j=0;j<=m;j++){
		        if(i==0 || j==0){
		            dp[i][j]=0;
		        }
		        else if(X.charAt(i-1)==Y.charAt(j-1))
		        dp[i][j]=1+dp[i-1][j-1];
		        else{
		            dp[i][j]=Math.max(dp[i][j-1],dp[i-1][j]);
		        }
		    }
		}
		int lcslength=dp[n][m];
		int todelete=costX*(n-lcslength)+costY*(m-lcslength);
		return todelete;
	}
}

```
