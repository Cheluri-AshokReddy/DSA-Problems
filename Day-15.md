# DSA Day-15

## Topic:String
### Problem statement: FunnyString
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
     * Complete the 'funnyString' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING s as parameter.
     */

    public static String funnyString(String s) {
    // Write your code here
    ArrayList<Integer>arr1=new ArrayList<>();
    for(int i=0;i<s.length();i++){
        arr1.add(Character.getNumericValue(s.charAt(i)));
    }
    ArrayList<Integer> arr2 = new ArrayList<>(arr1);
        Collections.reverse(arr2);
    ArrayList<Integer>arr=new ArrayList<>();
    for(int i=0;i<arr1.size()-1;i++){
        arr.add(Math.abs(arr1.get(i)-arr1.get(i+1)));
    }
    ArrayList<Integer>ar=new ArrayList<>();
    for(int i=0;i<arr2.size()-1;i++){
        ar.add(Math.abs(arr2.get(i)-arr2.get(i+1)));
    }
    boolean check=arr.equals(ar);
    if(check){
        return "Funny";
    }else
    return "Not Funny";
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int q = Integer.parseInt(bufferedReader.readLine().trim());

        IntStream.range(0, q).forEach(qItr -> {
            try {
                String s = bufferedReader.readLine();

                String result = Result.funnyString(s);

                bufferedWriter.write(result);
                bufferedWriter.newLine();
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        bufferedReader.close();
        bufferedWriter.close();
    }
}

