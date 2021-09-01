/*1512. Number of Good Pairs

Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.


Example 1:
Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.

Example 2:
Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good.

Example 3:
Input: nums = [1,2,3]
Output: 0

*/

//code::

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int count=0;
        while(i!=nums.size()-1){
            cout<<i<<endl;
            int j=i+1;
            while(j!=nums.size()){
                if(nums[i] == nums[j]){
                    count++; j++;
                }else{
                    //i++;
                     break;
                }
            }
            i++;
        }
        return count;
    }
};
