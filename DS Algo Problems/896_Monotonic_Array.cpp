/*896. Monotonic Array

An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.

 

Example 1:
Input: nums = [1,2,2,3]
Output: true

Example 2:
Input: nums = [6,5,4,4]
Output: true

Example 3:
Input: nums = [1,3,2]
Output: false

Example 4:
Input: nums = [1,2,4,5]
Output: true

Example 5:
Input: nums = [1,1,1]
Output: true

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

