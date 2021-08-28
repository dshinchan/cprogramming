/*1678. Goal Parser Interpretation 

You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command.

 

Example 1:

Input: command = "G()(al)"
Output: "Goal"
Explanation: The Goal Parser interprets the command as follows:
G -> G
() -> o
(al) -> al
The final concatenated result is "Goal".
Example 2:

Input: command = "G()()()()(al)"
Output: "Gooooal"
Example 3:

Input: command = "(al)G(al)()()G"
Output: "alGalooG"

*/

//code:

class Solution {
public:
    string interpret(string c) {
        string x;
        x.clear();
        stack<char> y;
        
        for(int i=0;i < c.size();i++){
            
            if(c[i] == '(' && y.empty()){
                y.push(c[i]);
                continue;
            }
            
            if(c[i]==')' && y.size() > 0 && y.top()=='('){
                y.pop();
                x.push_back('o');
                continue;
            }
            
            if(c[i]!='(' && c[i] != ')'){
                if(!y.empty()){
                    y.pop();
                }
                    x.push_back(c[i]);
            }
            
        }
        return x;
    }
};
