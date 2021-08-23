/*1941. Check if All Characters Have Equal Number of Occurrences

Given a string s, return true if s is a good string, or false otherwise.

A string s is good if all the characters that appear in s have the same number of occurrences (i.e., the same frequency).

 

Example 1:

Input: s = "abacbc"
Output: true
Explanation: The characters that appear in s are 'a', 'b', and 'c'. All characters occur 2 times in s.
Example 2:

Input: s = "aaabb"
Output: false
Explanation: The characters that appear in s are 'a' and 'b'.
'a' occurs 3 times while 'b' occurs 2 times, which is not the same number of times.

*/

//code::

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int x=0;
        vector<int> help(26);
        for(int i=0;i<s.size();i++){
             x = int(s[i])-97;
            help[x]++;
        }
       int max = help[x];
        for(int i=0;i<26;i++){
            if(help[i]!= max && help[i]!=0) return false;
        }
        return true;
    }
};
