//119. Pascal's Triangle II

/*
Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:





Example 1:

Input: rowIndex = 3
Output: [1,3,3,1]
Example 2:

Input: rowIndex = 0
Output: [1]
Example 3:

Input: rowIndex = 1
Output: [1,1]

*/

//code::

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0) return {1};
        vector<int> help;         
        vector<long> sum;
        int i=1; int j=0;
        while(i<rowIndex+1){
            j=0;
            while(j<i+1){
                if(j!=0 && j!=i){
                    help.push_back(sum[0]);
                    sum.erase(sum.begin());
                }else help.push_back(1);
                if(i== rowIndex) cout<<j<<endl;
                if(j!=0 && j!= rowIndex) sum.push_back(long(help[j])+long(help[j-1]));
                j++;
            }
            i++;
            if(i==rowIndex+1) return help;
            help.clear();
        }
        return help;
    }
};

