//70. Climbing Stairs
/*  
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

*/

//code::

class Solution {
public:
    int climbStairs(int n) {
        if(n==2){ return 2; }
        if(n==1){ return 1; }
        vector<int> help;
        int i=2;
        help.push_back(1);
        help.push_back(2);
        while(i < n){
            help.push_back(help[i-2] + help[i-1]);
            i++;
        }
        return help[i-1];
    }
};

