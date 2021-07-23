/*
125. VALID PALINDROME


Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Example 1:

Input: s = "A man, a plan, a canal: Panama"

Output: true

Explanation: "amanaplanacanalpanama" is a palindrome.

*/

class Solution {
public:
    bool isAlpha(char c){
        return (c >= 'A' && c<='Z') || (c >= 'a' && c<= 'z') || (c >= '0' && c<= '9') ;
    }
    bool isPalindrome(string s) {
        int i=0; int j= s.size()-1;
        if(s.size()==1){
            return true;
        }
        while(i!=j && i<j){
            cout<<i<<"\t"<<j<<"\n";
            while(i<j && !isAlpha(s[i])){
                    i++;
            }
            while(j>i && !isAlpha(s[j])){
                j--;
            }
            if(64<int(s[i])<91) s[i]=tolower(s[i]);
            if(64<int(s[j])<91) s[j]=tolower(s[j]);
           
            if(s[j]!=s[i])
                return false;
            else {
                i++;
                j--;}
        }
       return true;
    }
};
