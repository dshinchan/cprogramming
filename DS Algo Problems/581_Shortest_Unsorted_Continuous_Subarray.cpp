/*581. Shortest Unsorted Continuous Subarray

Given an integer array nums, you need to find one continuous subarray that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order.

Return the shortest such subarray and output its length.

Example 1:
Input: nums = [2,6,4,8,10,9,15]
Output: 5
Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.

Example 2:
Input: nums = [1,2,3,4]
Output: 0

Example 3:
Input: nums = [1]
Output: 0

*/

//code::

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> help = nums;
        if(nums.size() == 1) return 0;
        sort(nums.begin(),nums.end());
        int flag =0,k=0,j=0;
        for(int i=0;i<help.size();i++){
            if(flag ==0 && help[i]!=nums[i]){ 
                j = i ;
                flag = 1;
            }
            if(flag == 1 && help[i]!=nums[i]) k=i;
        }
        if(j==0 && k==0) return 0;
        return k-j+1;
    }
};
