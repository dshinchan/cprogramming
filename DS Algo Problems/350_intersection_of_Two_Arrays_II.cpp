//350. Intersection of Two Arrays II

Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
 
Example 1:
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]

Example 2:
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Explanation: [9,4] is also accepted.

*/

//code:

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0;
        int j = 0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while( i<n1 && j<n2)
        {

                if(nums1[i] < nums2[j]){
                    i++;
                }
                else if(nums1[i] > nums2[j])
                    j++;

                else{

                 arr.push_back(nums1[i]);
                    i++;
                    j++;

                }
            }
              return arr;
    }
};

