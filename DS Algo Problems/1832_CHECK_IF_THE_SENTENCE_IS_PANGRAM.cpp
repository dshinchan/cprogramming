/*

1832. CHECK IF THE SENTENCE IS PANGRAM

A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

 

Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.
Example 2:

Input: sentence = "leetcode"
Output: false

*/
//code::

class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int> x(26);
        for(int i=0;i<s.size();i++){
                x[int(s[i])-97]=1;
        }
        for(int i=0;i<x.size();i++){
            if(x[i]==0){
                return false;
            }
        }
        return 1;
    }
};
