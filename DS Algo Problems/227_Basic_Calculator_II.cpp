//227. Basic Calculator II

/*

Given a string s which represents an expression, evaluate this expression and return its value. 

The integer division should truncate toward zero.

Note: You are not allowed to use any built-in function which evaluates strings as mathematical expressions, such as eval().

 

Example 1:

Input: s = "3+2*2"
Output: 7
Example 2:

Input: s = " 3/2 "
Output: 1
Example 3:

Input: s = " 3+5 / 2 "
Output: 5

*/

//CODE::

class Solution {
public:
    stack<int> numbers;
    stack<char> symbol;
    int popped(char x){
                int j=numbers.top();
                numbers.pop();
                int k=numbers.top();
                numbers.pop();
                switch(x){
                        case '+' : {
                            numbers.push(j+k);
                            symbol.pop();
                            break;
                        }
                       case '-' : {
                            numbers.push(k-j);
                            symbol.pop();
                            break;
                        }
                        case '*' : {
                            numbers.push(j*k);
                            symbol.pop();
                            break;
                        }
                        case  '/' : {
                            numbers.push(k/j);
                             symbol.pop();
                            break;
                        }
                }
        return 0;
    }
    
    
    int calculate(string s){
        string str;
            int i=0;
            while(i!=s.size()){
                if(s[i]!= '+' && s[i]!='-' && s[i]!='*' && s[i]!='/'){
                    str.push_back(s[i]);
                    cout<<str<<"\n";
                    i++;
                }else{
                    if(!str.empty()){
                        cout<<"value of str "<<str<<endl;
                    int x = stoi(str);
                    cout<<"value of x "<<x<<endl;
                    //cout<<x;
                    
                    numbers.push(x);
                    str.erase();
                        
                    }
                    if(symbol.empty()){  
                       symbol.push(s[i]);
                        i++;
                    }else{
                        if(s[i]=='*' || s[i] == '/'){
                            if(symbol.top()=='+' || symbol.top()=='-' ){
                                    symbol.push(s[i]);     
                                    i++;
                            }else{
                                if(symbol.top()=='*' || symbol.top()=='/' ){
                                            popped(symbol.top());
                                }
                            }
                        }else{
                            if(s[i]=='+' || s[i] == '-'){
                                    popped(symbol.top());
                            }
                        }
                    }
                }
                //cout<<numbers.top()<<"\n";
            }
            if(!str.empty()){
                    int x = stoi(str);
                    cout<<str;
                    numbers.push(x);
                    str.erase();
            }
            while(!symbol.empty()){
                popped(symbol.top());
            }
        return numbers.top();
    }
};

