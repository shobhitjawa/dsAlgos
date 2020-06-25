import java.util.HashSet; 
public class GFG 
{  
    static boolean isSubset(int arr1[], int arr2[], int m, 
                                                 int n) 
   {
       HashSet<Integer> h1=new HashSet<Integer>();
       for(int i=0;i<m;i++)
       {
       if(!h1.contains(arr1[i]))
       {
           h1.add(arr1[i]);
       }
       }
       for(int i=0;i<n;i++)
       {
           if(!h1.contains(arr2[i]))
           {
               return false;
           }
           else{
               return true;
           }
       }
       return true;
   }
   
  
    public static void main(String[] args)  
    {  
        int arr1[] = {11, 1, 13, 21, 3, 7}; 
        int arr2[] = {11, 3, 7, 1};  
        int m = arr1.length; 
        int n = arr2.length;  
        if(isSubset(arr1, arr2, m, n)) 
        System.out.println("arr2 is a subset of arr1"); 
        else
        System.out.println("arr2 is not a subset of arr1"); 
    } 
} 