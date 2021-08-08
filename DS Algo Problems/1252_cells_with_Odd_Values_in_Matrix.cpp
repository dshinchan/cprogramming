//1252. Cells with Odd Values in a Matrix

/*
There is an m x n matrix that is initialized to all 0's. There is also a 2D array indices where each indices[i] = [ri, ci] represents a 0-indexed location to perform some increment operations on the matrix.

For each location indices[i], do both of the following:

Increment all the cells on row ri.
Increment all the cells on column ci.
Given m, n, and indices, return the number of odd-valued cells in the matrix after applying the increment to all locations in indices.

 


Example 1:


Input: m = 2, n = 3, indices = [[0,1],[1,1]]
Output: 6
Explanation: Initial matrix = [[0,0,0],[0,0,0]].
After applying first increment it becomes [[1,2,1],[0,1,0]].
The final matrix is [[1,3,1],[1,3,1]], which contains 6 odd numbers.

*/


//code:

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& ind) {
         vector<vector<int>> matrix(m, vector<int>(n, 0));
        int i=0;int j=0,x,y;
        
        for(int a=0 ; a<ind.size() ; a++){
            x=ind[a][0];
            y=ind[a][1];
            for(j=0;j<n;j++){
                matrix[x][j]=matrix[x][j]+1;
            }
            for(j=0;j<m;j++){
                matrix[j][y]++;
            }
        }
        int count=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
            if(matrix[i][j]%2==1)
                count++;
            }
        }
        return count;
    }
};

