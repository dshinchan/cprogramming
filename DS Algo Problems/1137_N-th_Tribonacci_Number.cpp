//1137. N-th Tribonacci Number

/*
The Tribonacci sequence Tn is defined as follows: 

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Given n, return the value of Tn.

 

Example 1:

Input: n = 4
Output: 4
Explanation:
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4
Example 2:

Input: n = 25
Output: 1389537

*/

//code::

class Solution {
public:
    int tribonacci(int n) {
        if(n == 0) return 0;
        if( n==1 || n==2 ) return 1;
        vector<int> help;
        int i=3;
        help.push_back(0); help.push_back(1); help.push_back(1);
        while(i<n+1){
            help.push_back(help[i-2] + help[i-1]+help[i-3]);
            i++;
        }
        return help[i-1];
    }
};
