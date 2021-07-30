//66. Plus One
/*
Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

 

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Example 3:

Input: digits = [0]
Output: [1]

*/


//code::



class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        int x=digits.size()-1;
        vector<int> ans;
        int i=0;
        while(carry!=0){
            if(x>=0){
                if(digits[x]==9) {ans.push_back(0);}
                else {
                    ans.push_back(digits[x]+1);
                    carry=0;
                }
            }else{
                ans.push_back(1);
                carry=0;
            }
            x--;
        }
        while(x>=0){
            ans.push_back(digits[x]);
            x--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
