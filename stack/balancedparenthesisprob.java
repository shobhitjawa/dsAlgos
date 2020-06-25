import java.util.*;
public class MyClass {
    static void balancedparenthesis(String s)
    { 
        
        Stack<Character> s1=new Stack<>(); 
        char[] arr=s.toCharArray();
        for(int i=0;i<arr.length;i++)
        {
       
        }
        int count=0;
        int l=arr.length;
      
          //System.out.print(l);
        for(int i=0;i<arr.length;i++)
        {
              if(l%2!=0)
        {
            break;
        }
        
        else{
                 if(arr[i]=='{'||arr[i]=='[' ||arr[i]=='(')
            {
                s1.push(arr[i]);
            }
            else if(arr[i]==')')
            {
                if(s1.peek()=='(')
                {
                    count++;
                    s1.pop();
                } 
            }
            else if(arr[i]==']')
            {
                   if(s1.peek()=='[')
                {
                    count++;
                     s1.pop();
                } 
            }
            else if(arr[i]=='}')
            {
                   if(s1.peek()=='{')
                {
                    count++;
                     s1.pop();
                } 
            }
            else{
                
            }
        }
        }
    //System.out.print(count);
     if(count==l/2&&(l%2==0))
     {
        System.out.print("balanced");
     }
     else{
         System.out.print("not balanced");
     }
    }
    public static void main(String args[]) {
 	String s="(({[]})){}()[{}]({[({})]})({)}";
	balancedparenthesis(s);
    }
}