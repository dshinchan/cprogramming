/*402. Remove K Digits 

Given string num representing a non-negative integer num, and an integer k, return the smallest possible integer after removing k digits from num.

Example 1:
Input: num = "1432219", k = 3
Output: "1219"
Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.

Example 2:
Input: num = "10200", k = 1
Output: "200"
Explanation: Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.

Example 3:
Input: num = "10", k = 2
Output: "0"
Explanation: Remove all the digits from the number and it is left with nothing which is 0. 


*/

//code::

class Solution {
public:
    string removeKdigits(string nums, int k) {
        if(nums.size() == k) return "0";
        stack<char>help;
        for(int i=0;i<nums.size();i++){
            while(k && !help.empty() && help.top()>nums[i])
            {
                k--;
                help.pop();
            }
            help.push(nums[i]);
        }
        
        while(k){
            help.pop();
            k--;
        }
        string str;
        while(!help.empty()){
            str = str + help.top();
            help.pop();
        }
        
        reverse(str.begin(),str.end());
        
        for(int i=0;i<str.size();i++){
            
            if(str[i]!='0') return str.substr(i); 
        }
        
        return "0";
    }
};

