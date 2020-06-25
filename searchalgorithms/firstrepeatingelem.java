/* Java program to find first repeating element in arr[] */
import java.util.*; 
  
public class Main 
{ 
    // This function prints the first repeating element in arr[] 
    static void printFirstRepeating(int arr[]) 
    {
        int x=0;
        int min=-1;
        HashSet<Integer> h1=new HashSet();
        for(int i=arr.length-1;i>0;i--)
        {                                //first repeating element in array time complexity-O(n).
            if(h1.contains(arr[i])){
            x=arr[i];
             min=i;
            }
            else{
                h1.add(arr[i]);
            }
        }
        if(min!=-1)
        System.out.print("first repeating element is "+arr[min]);
    }
  
    // Driver method to test above method 
    public static void main (String[] args) throws java.lang.Exception 
    { 
        int arr[] = {10, 5, 3, 4, 5, 3, 6}; 
        printFirstRepeating(arr); 
    } 
} 