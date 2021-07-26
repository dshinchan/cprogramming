/*

20.VALID PARENTHESES


Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid. 
An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true


Example 2:
Input: s = "()[]{}"
Output: true

*/

//code

class Solution {
public:
    bool isValid(string s) {
        stack<char> help;
        int i=0;
        while(i<s.size()){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                help.push(s[i]);
                cout<<help.top();
            }else{
                if(help.empty())
                    return false;
                else{
                    //cout<<"helllo";
                    switch(s[i]){
                        case ')':{
                            cout<<int(s[i])<<"\t"<<int(help.top());
                            if(int(s[i])-int(help.top())!=1)
                                return false;
                            break;
                        }
                        case '}':{
                            if(int(s[i])-int(help.top())!=2)
                                return false;
                            break;
                        }
                        case ']':{
                            if(int(s[i])-int(help.top())!=2)
                                return false;
                            break;
                        }
                    }
                    help.pop();
                }
            }
            i++;
        }
        if(!help.empty())
            return false;
        return true;
    }
};
