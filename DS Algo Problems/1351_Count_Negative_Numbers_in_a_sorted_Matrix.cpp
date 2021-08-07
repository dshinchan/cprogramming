//1351. Count Negative Numbers in a Sorted Matrix

/*
Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.

 

Example 1:

Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
Output: 8
Explanation: There are 8 negatives number in the matrix.
Example 2:

Input: grid = [[3,2],[1,0]]
Output: 0
Example 3:

Input: grid = [[1,-1],[-1,-1]]
Output: 3
Example 4:

Input: grid = [[-1]]
Output: 1

*/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int i = grid[0].size() - 1;
        int m = grid.size();
        int j=0;
        while(i>=0 && j!=grid.size()){
            if(grid[j][i]<0){
                count += m -j ;
                i--;
            }else{
                j++;
            }
        }
        return count;
    }
};

