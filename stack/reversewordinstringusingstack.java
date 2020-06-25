import java.util.*;
public class MyClass {
    public static void main(String args[]) {
      String str = "Geeks for Geeks hut";
      int len=str.length();
      Stack<Character> s1=new Stack<>();
      char[] arr=str.toCharArray();
      for(int i=0;i<len;i++)
      { 
          if(arr[i]==' ')
          {
              while(s1.empty()==false)
              {
                  System.out.print(s1.peek());
                  s1.pop();
              }
             System.out.print(" ");
          }
          else
          s1.push(arr[i]);
      }
      while(s1.empty()==false)
      {
          System.out.print(s1.peek());
                  s1.pop(); 
      }
    }
}