/*
1. TWO SUM

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

*/

//code:

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int , int> help;
        for(int i =0 ; i <nums.size();i++){
            if((help.find(target - nums[i])) != help.end()){
                auto x = help.find(target-nums[i]);
                return {i, x->second};
            }
            help.insert({nums[i],i});
        }
        return {};
    }
};
