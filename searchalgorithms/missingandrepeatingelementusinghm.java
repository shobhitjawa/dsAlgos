import java.util.*; 
  
public class Test1 { 
  
    public static void main(String[] args) 
    { 
  
        int[] arr = { 4, 3, 6, 2, 1, 1 }; 
        int n=arr.length;
        HashMap<Integer,Boolean> hm=new HashMap<Integer,Boolean>();
        for(int i:arr)
        {
            if(hm.get(i)==null)
            {
                hm.put(i,true);
            }
            else
            {
                System.out.print("repeating element is: "+i);
            }
        }
        System.out.println();
        for(int i=1;i<=n;i++)
        {
            if(hm.get(i)==null)
            System.out.print("Missing element is :"+i);
        }
    }
}