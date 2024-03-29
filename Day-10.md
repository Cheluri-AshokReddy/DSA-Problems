# DSA Day-Day-10

## Topic:2D-Arrays
### Problem statement:2D Array - DS
## Solution:
```java
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'hourglassSum' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts 2D_INTEGER_ARRAY arr as parameter.
     */
     public static int sum=Integer.MIN_VALUE;
    public static int hourglassSum(List<List<Integer>> arr) {
    // Write your code here
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            calculate(arr,i,j);
        }
    }
    return sum;
    }
    public static void calculate(List<List<Integer>>arr,int row,int col){
        int arrsum=0;
        for(int i=col;i<col+3;i++){
            arrsum+=arr.get(row).get(i);
        }
        arrsum+=arr.get(row+1).get(col+1);
        for(int i=col;i<col+3;i++){
            arrsum+=arr.get(row+2).get(i);
        }
        sum=Math.max(arrsum,sum);
    }
    
}


public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        List<List<Integer>> arr = new ArrayList<>();

        IntStream.range(0, 6).forEach(i -> {
            try {
                arr.add(
                    Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                        .map(Integer::parseInt)
                        .collect(toList())
                );
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        int result = Result.hourglassSum(arr);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}


```
