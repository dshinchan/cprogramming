/*

150. EVALUATE REVERSE POLISH NOTATION

Evaluate the value of an arithmetic expression in Reverse Polish Notation.

Valid operators are +, -, *, and /. Each operand may be an integer or another expression.

Note that division between two integers should truncate toward zero.

It is guaranteed that the given RPN expression is always valid. That means the expression would always evaluate to a result, and there will not be any division by zero operation.

 */ /*

EXAMPLE 1:

Input: tokens = ["2","1","+","3","*"]
Output: 9
Explanation: ((2 + 1) * 3) = 9

*/

//CODE:

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> result;
        
        for(int i =0;i<tokens.size();i++) {
            string ans = tokens[i];
            if(ans == "+" || ans =="-" || ans =="*" || ans =="/") {
                int j=result.top();
                result.pop();
                int k=result.top();
                result.pop();
                switch(ans[0]){
                        case '+' : {
                            result.push(j+k);
                            break;
                        }
                       case '-' : {
                            result.push(k-j);
                            break;
                        }
                        case '*' : {
                            result.push(j*k);
                            break;
                        }
                        case  '/' : {
                            result.push(k/j);
                            break;
                        }
                }
                
            }else{
                int x = stoi(ans);
                result.push(x);
                
            }
        }
        
        return result.top();
        
    }
};
