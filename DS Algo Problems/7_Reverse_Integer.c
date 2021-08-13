//7. Reverse Integer

/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
Example 4:

Input: x = 0
Output: 0

*/

//code::

class Solution {
public:
    int reverse(int x) {
        int y = x;
        long ans=0;
        int low = pow(-2, 31);
        int up = pow(2,31)-1;
        while(x!=0 && (ans <= up && ans >= low)){
            ans=ans*10+x%10;
           
            x=x/10;
        }
        
        return ans>up || ans < low ? 0 : ans;
    }
};
