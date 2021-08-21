/*1394. Find Lucky Integer in an Array

Given an array of integers arr, a lucky integer is an integer which has a frequency in the array equal to its value.

Return a lucky integer in the array. If there are multiple lucky integers return the largest of them. If there is no lucky integer return -1.

 

Example 1:
Input: arr = [2,2,3,4]
Output: 2
Explanation: The only lucky number in the array is 2 because frequency[2] == 2.

Example 2:
Input: arr = [1,2,2,3,3,3]
Output: 3
Explanation: 1, 2 and 3 are all lucky numbers, return the largest of them.

Example 3:
Input: arr = [2,2,2,3,3]
Output: -1
Explanation: There are no lucky numbers in the array.

Example 4:
Input: arr = [5]
Output: -1

Example 5:
Input: arr = [7,7,7,7,7,7,7]
Output: 7

*/

//code:

class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> help(arr[arr.size()-1]+1);      
        
        for(int i=0;i<arr.size();i++){
            help[arr[i]]++;
        }
        int save = -1;
        for(int i=1;i<help.size();i++){
            if(i == help[i]) save =i;
        }
        return save;
    }
};

