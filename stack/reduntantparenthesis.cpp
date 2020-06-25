 #include <bits/stdc++.h> 
using namespace std;  
bool checkRedundancy(string& str) 
{  
    stack<char> st; 
   
    for (int i=0;i<str.length();i++) {   
    
        if (str[i] == ')') { 
            char top = st.top(); 
            st.pop();  
            bool flag = true; 
  
            while (top != '(') {  
                if (top == '+' || top == '-' ||  
                    top == '*' || top == '/') 
                    flag = false;                              //check redundant brackets.
					  
                top = st.top(); 
                st.pop(); 
            }  
            if (flag == true) 
                return true; 
        } 
  
        else
            st.push(str[i]); 
    } 
    return false; 
}   
void findRedundant(string& str) 
{ 
    bool ans = checkRedundancy(str); 
    if (ans == true) 
        cout << "Yes\n"; 
    else
        cout << "No\n"; 
}  
int main() 
{ 
    string str = "((a+b))"; 
    findRedundant(str); 
  
    str = "(a+(b)/c)"; 
    findRedundant(str); 
  
    str = "(a+b*(c-d))"; 
    findRedundant(str); 
  
    return 0; 
} 
