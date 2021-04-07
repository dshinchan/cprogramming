/*Given a string s of lower and upper case English letters.

A good string is a string which doesn't have two adjacent characters s[i] and s[i + 1] where:

0 <= i <= s.length - 2
s[i] is a lower-case letter and s[i + 1] is the same letter but in upper-case or vice-versa.
To make the string good, you can choose two adjacent characters that make the string bad and remove them. You can keep doing this until the string becomes good.

Return the string after making it good. The answer is guaranteed to be unique under the given constraints.*/

//Notice that an empty string is also good.



class Solution {
public:
    string makeGood(string s) {
        stack <char> result;
        string X = "";
        int i=0;
        while(i<s.size()){
            if(result.empty())
                result.push(s.at(i));
            else{
                if( int(result.top())==int(s[i]-32) ||int(result.top())==int(s[i]+32)) {
                    cout<<int(s[i]);
                    result.pop();
                }else
                    result.push(s[i]);
            }
            i++;
        }
        if(result.empty())
            return "";
        else{
            while(!result.empty())
            {
               X = result.top() + X;
                result.pop();
            } 
        }
        return X;
    }
};
