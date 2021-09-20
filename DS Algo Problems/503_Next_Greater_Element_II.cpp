/*503. Next Greater Element II 

Given a circular integer array nums (i.e., the next element of nums[nums.length - 1] is nums[0]), return the next greater number for every element in nums.

The next greater number of a number x is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, return -1 for this number.


Example 1:
Input: nums = [1,2,1]
Output: [2,-1,2]

Explanation: The first 1's next greater number is 2; 
The number 2 can't find next greater number. 
The second 1's next greater number needs to search circularly, which is also 2.

Example 2:
Input: nums = [1,2,3,4,3]
Output: [2,3,4,-1,4] 

*/

//code:


class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        if(nums.size() == 1) return {-1};
        int j=1,i=0,flag=0;
        vector<int>ans;
        while(i<nums.size()){
            if(flag == 0) j = i+1;
            if(j == nums.size()) j =0;
        
            if(nums[i]<nums[j] && i!=j){
                i++;
                ans.push_back(nums[j]);
                flag=0;
            }else{
                if(i==j){
                ans.push_back(-1);
                i++;
                flag=0;
                }else flag=1;
            } 
            j++;
        }
        return ans;
    }
};
