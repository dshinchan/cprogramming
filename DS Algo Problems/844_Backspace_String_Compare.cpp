/*844. Backspace String Compare

Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

Example 1:
Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".

Example 2:
Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".

Example 3:
Input: s = "a##c", t = "#a#c"
Output: true
Explanation: Both s and t become "c".

Example 4:
Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".


*/

//code::

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i,j;
        stack<int> SA;
        stack<int> SB;
        for(i=0;i<s.size();i++){
            if(s[i]=='#' && !SA.empty()){
                SA.pop();
            }else if(s[i]!='#')
                SA.push(s[i]);
        }
        for(i=0;i<t.size();i++){
            if(t[i]=='#' && !SB.empty()){
                SB.pop();
            }else if(t[i]!='#')
                SB.push(t[i]);
        }
        if(SA.size()!=SB.size())
            return false;
        
        while(!SA.empty()){
            if(SA.top()!=SB.top()){
                return false;
            }
            SA.pop();
            SB.pop();
        }
        return true;
    }
};
