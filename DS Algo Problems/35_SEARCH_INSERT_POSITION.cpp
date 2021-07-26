/*35. SEARCH INSERT POSITION

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
*/

//code:

class Solution {                                       
public:
      int searchInsert(vector<int>& nums, int target) {
      int index=0,j;
        for(j=0;j<nums.size();j++){
            if(target==nums[j])
                return j;
            if(nums[j]>target){
                break;
            }
        }
        return j;
    }
};
