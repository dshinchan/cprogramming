//67. Add Binary

/*
Given two binary strings a and b, return their sum as a binary string.

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"

*/

//code:

class Solution {
public:
    void helper(string s, int index, char c, string& ans){
        char z = '0';
      while(index>=0){
            int t = c-'0' + s[index]-'0';
            if(t==2){
                z='0'; c='1';
            }else if(t==1){
                z = '1'; c='0';
            } else {
                z = '0'; c='0';
            }    
            ans = z + ans;
            index--;
        }
        
         if(c!='0')  ans='1'+ans;
    }
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        int carry = 0;
        string ans= "";
        while(i>=0 || j>=0 || carry){
            int num1 = i>=0 ? a[i--]-'0' : 0;
            int num2 = j>=0 ? b[j--]-'0' : 0;
            int sum = carry + num1+num2;
            char c = '0'+sum%2;
            ans = c+ans;
            carry = sum/2;
        }
        
        return ans;
     }
};

