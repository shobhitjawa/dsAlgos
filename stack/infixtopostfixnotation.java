import java.util.*;
public class MyClass {
    static int precedence(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 
     static void infixtopostfix(String s)
     {
      //System.out.print(s);
      Stack<Character> s1=new Stack<> ();
      s1.push('N');
      String f="";
      int len=s.length();
      char[] a=s.toCharArray();
      for(int i=0;i<len;i++)
      {
          if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
          {
              f=f+a[i];
               
          }
          else if(a[i]=='(')
          {
              s1.push('(');
          }
          else if(a[i]==')')
          {
              while(s1.peek()!='N'&&s1.peek()!='(')
              {
                  char c=s1.peek();
                  s1.pop();
                  f=f+c;
              }
              if(s1.peek()=='(')
              {
                char r=s1.peek();
                s1.pop();
              }
          }
          else{
              while(s1.peek()!='N'&&precedence(a[i])<=precedence(s1.peek()))
              {
                //  System.out.print("1");
                  char c=s1.peek();
                  s1.pop();
                  f=f+c;
              }
              s1.push(a[i]);
          }
          
      }
      while(s1.peek()!='N')
      {
          char r=s1.peek();
          s1.pop();
          f=f+r; 
      }
      System.out.print(f);
     }
    public static void main(String args[]) {
      String exp = "a+b*(c^d-e)^(f+g*h)-i";
     infixtopostfix(exp);
    }
}