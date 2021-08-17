/*283. Move Zeroes


Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]

*/
//code:


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,count=0,j=0;
        while(i<nums.size()){
            if(nums[i]==0){
               if(count==0){
                  j=i;
                   count=1;
               }
            }
            else{
                if(count!=0){
                    nums[j]=nums[i];
                    nums[i]=0;
                    count=0;
                    i=j;
                }
            }
            i++;
        }
    }
};

