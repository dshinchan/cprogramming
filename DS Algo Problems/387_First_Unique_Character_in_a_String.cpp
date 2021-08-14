/*387. First Unique Character in a String


Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 

Example 1:

Input: s = "leetcode"
Output: 0
Example 2:

Input: s = "loveleetcode"
Output: 2
Example 3:

Input: s = "aabb"
Output: -1


*///code::

class Solution {
public:
    int firstUniqChar(string s) {
       int n=s.size();
       int i=0;
        vector<int> help(26); 
        while(i!=s.size()){
            int x=s[i]-'a';
            help[x]=help[x]+1;
            i++;
        }
        i=0;
        while(i!=s.size()){
            if(help[s[i]-'a'] == 1)
                return i;
            i++;
        }
        return -1;
    }
};
