/*338. Counting Bits


Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

 

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
Example 2:

Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101

*/
//code:


class Solution {
public:
    int dectobinary(int num){
        int count=0;
        while(num>0){
            int x=num%2;
            if(x==1) count++;
            
            num=num/2;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i=0;i<=n;i++){
            ans[i]=dectobinary(i);
        }
        return ans;
    }
};

