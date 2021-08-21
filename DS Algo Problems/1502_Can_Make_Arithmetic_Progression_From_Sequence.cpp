/*1502. Can Make Arithmetic Progression From Sequence
A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.

Example 1:
Input: arr = [3,5,1]
Output: true
Explanation: We can reorder the elements as [1,3,5] or [5,3,1] with differences 2 and -2 respectively, between each consecutive elements.

Example 2:
Input: arr = [1,2,4]
Output: false
Explanation: There is no way to reorder the elements to obtain an arithmetic progression.


*/

//code::


class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int min = arr[0] - arr[1];
        for(int i=1;i<arr.size()-1;i++){
            int x = arr[i]-arr[i+1];
            if(x!=min){
                return false;
            }
        }
        return true;
    }
};
