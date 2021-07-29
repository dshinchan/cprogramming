/*
118. Pascal's Triangle



Given an integer numRows, return the first numRows of Pascal's triangle.


In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


https://upload.wikimedia.org/wikipedia/commons/0/0d/PascalTriangleAnimated2.gif
Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]

*/

//code:

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1) return {{1}};
        vector<int> help;         help.push_back(1);
        vector<vector<int>> ans;  ans.push_back(help);
        help.clear();
        vector<int> sum;
        int i=1; int j=0;
        while(i<numRows){
            j=0;
            while(j<i+1){
                if(j!=0 && j!=i){
                    help.push_back(sum[0]);
                    sum.erase(sum.begin());
                }else help.push_back(1);
                
                if(j!=0) sum.push_back(help[j]+help[j-1]);
                j++;
            }
            ans.push_back(help);
            help.clear();
            i++;
        }
        return ans;
    }
};
