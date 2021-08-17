/*349. Intersection of Two Arrays

Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted

*/
//code:

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();   int size2= nums2.size();
        int i=0;                    int j=0;
        vector<int> ans;
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());
        while(i<size1 && j<size2){
            if(i>0 && nums1[i]==nums1[i-1]) 
            {   i++;
                continue;}
            
            if(nums1[i]<nums2[j]) i++;
            else{
                if(nums2[j]<nums1[i]) j++;
                else{
                    ans.push_back(nums1[i]);
                     i++ ; j++;
                }
            }
            
        }
        return ans;
    }
};

