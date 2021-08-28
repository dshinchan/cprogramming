/*1704. Determine if String Halves Are Alike


You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.

Return true if a and b are alike. Otherwise, return false.

 

Example 1:

Input: s = "book"
Output: true
Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.
Example 2:

Input: s = "textbook"
Output: false
Explanation: a = "text" and b = "book". a has 1 vowel whereas b has 2. Therefore, they are not alike.
Notice that the vowel o is counted twice.
Example 3:

Input: s = "MerryChristmas"
Output: false
Example 4:

Input: s = "AbCdEfGh"
Output: true

*/

//code::

class Solution {
public:
    bool halvesAreAlike(string s) {
        int x=s.size()/2;
        int y=x-1;
        int acount=0,bcount=0;
        for(;x<s.size();x++){
            switch(s[x]){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':{
                    acount++;
                }
            }
        }
        
        for(;y>=0;y--){
            switch(s[y]){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':{
                    bcount++;
                }
            }
        }
        if(acount!=bcount){
            return false;
        }
        return true;
    }
};

