
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
  public static void main (String[] args) throws java.lang.Exception
  {
  
    Scanner scn =new Scanner(System.in);
    int tc = scn.nextInt();
    while(tc-->0){
        int n = scn.nextInt();
        int arr[] = new int[n];
        
        for(int i =0;i<n;i++){
            arr[i] = scn.nextInt();
        }
        long ans =0;
        HashMap<Integer, Integer> map =new HashMap<>();
      
        for(int i=0;i<n;i++){
            int len = arr[i];
            int si = (i-len+1>=0)?i-len+1:0;
            if(map.containsKey(arr[i]) && map.get(arr[i])>=si)si= map.get(arr[i])+1;
            int ei = (si+len-1>=n)?n-1:si+len-1;
            if(ei-si+1!=len )continue;
          //  System.out.println((i-si+1)+" "+(n-ei));
            ans+=Math.min((i-si+1),(n-ei));
            map.put(arr[i],i);
        }
        System.out.println(ans);
    }
  }
}