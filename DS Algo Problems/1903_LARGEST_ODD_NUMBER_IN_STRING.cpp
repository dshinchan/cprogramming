/*

1903. LARGEST ODD NUMBER IN STRING
 You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.
A substring is a contiguous sequence of characters within a string.

 

Example 1:

Input: num = "52"
Output: "5"
Explanation: The only non-empty substrings are "5", "2", and "52". "5" is the only odd number.
*/

//code:

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size(), i = n - 1;
        while(i >= 0){
            if((num[i]-'0')%2 == 0){
                i--;
            }else{
                break;
            }
        }
        return num.substr(0, i + 1);
    }
};
