/* 856. Score of Parentheses

Given a balanced parentheses string s, return the score of the string.

The score of a balanced parentheses string is based on the following rule:

"()" has score 1.
AB has score A + B, where A and B are balanced parentheses strings.
(A) has score 2 * A, where A is a balanced parentheses string.
 

Example 1:

Input: s = "()"
Output: 1
Example 2:

Input: s = "(())"
Output: 2
Example 3:

Input: s = "()()"
Output: 2
Example 4:

Input: s = "(()(()))"
Output: 6 

*/

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> help;
        int ans=0,temp =0 ,flag=1;
        for(int i=0;i<s.size();i++){
            if(help.empty() && s[i] == '('){
                    help.push('(');
                    temp =1;
                    flag=1;
                
            }else{
                if(s[i] == '('){
                    temp = temp*2;
                    flag =1;
                    help.push('(');
                }else{
                    if(flag == 0){
                        temp = temp/2;
                        help.pop();
                    }else{
                        ans = ans+ temp;
                        help.pop();
                        flag =0;
                        temp = temp/2;
                    }
                }
                
            }
        }
            return ans;
    }
};
