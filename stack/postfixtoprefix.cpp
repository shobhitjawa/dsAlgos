#include <iostream> 
#include <stack> 
using namespace std;  
bool isOperator(char x) { 
   if(x=='+'||x=='-'||x=='/'||x=='*')
     {
     	return true;
	 }
	 else{
	 	return false;
	 }
}  
string preToPost(string pre_exp) { 
  
  stack<string> s;                                        // postfix to prefix.
  int length = pre_exp.size();  
  for (int i =0; i < length; i++) {  
    if (isOperator(pre_exp[i]))
	 {  
      string op1 = s.top();
	   s.pop(); 
      string op2 = s.top();
	   s.pop();  
      string temp =pre_exp[i] +op2 + op1;  
      s.push(temp); 
    }  
    else {  
      s.push(string(1, pre_exp[i])); 
    } 
  }  
  return s.top(); 
}  
int main() { 
  string post = "ABC/-AK/L-*";  
  cout << "prefix : " << preToPost(post); 
  return 0; 
} 
