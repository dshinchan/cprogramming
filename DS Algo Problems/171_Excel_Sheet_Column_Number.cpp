//171. Excel Sheet Column Number



/*Given a string columnTitle that represents the column title as appear in an Excel sheet, return its corresponding column number.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
 

Example 1:

Input: columnTitle = "A"
Output: 1
Example 2:

Input: columnTitle = "AB"
Output: 28
Example 3:

Input: columnTitle = "ZY"
Output: 701
Example 4:

Input: columnTitle = "FXSHRXW"
Output: 2147483647

*/

//code::


class Solution {
public:
    int titleToNumber(string s) {
        int i=s.size()-1;
        int j=0;
        long final=0;
        while(i>-1 && j<s.size()){
            int prod=1;
            if(i==0)  prod=0;
            else  prod = pow(26,i);
            int sum = int(s[j])-int('A')+1;
            prod = prod*sum;
            if(i==0) final=final+sum+prod;
            else final = final+prod;
            i--;
            j++;
            
        }
        return final;
    }
};

