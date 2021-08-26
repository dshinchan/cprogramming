/*645. Set Mismatch


You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.

 

Example 1:

Input: nums = [1,2,2,4]
Output: [2,3]
Example 2:

Input: nums = [1,1]
Output: [1,2]

*/

//code::

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        vector<int> freq(nums.size(),0);
        for(int i=0;i<nums.size();i++){
                freq[nums[i]-1]++;
        }
        vector<int> ans(2,0);
        for(int i=0;i<freq.size();i++){
            if(freq[i]==0){
                ans[1] = i+1;
            }else if(freq[i]==2){
                ans[0] = i+1;
            }
        }
        
        return ans;
    }
};
