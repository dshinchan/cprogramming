//345. Reverse Vowels of a String 


/*Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both cases.

 



Example 1:

Input: s = "hello"
Output: "holle"
Example 2:

Input: s = "leetcode"
Output: "leotcede"

*/

//code::

class Solution {
public:
    bool isvowel(char s) {
            if(s == 'a' || s == 'e'  || s == 'i'  || s == 'o' || s == 'u' 
              ||s == 'A' || s == 'E'  || s == 'I'  || s == 'O' || s == 'U' )
                return true;
            
            return false;
            
        }
    
        string reverseVowels(string s) {
        int n = s.length();
        int i =0 ; int j=  n-1;
        while(i<=j) {
            
            while(!isvowel(s[i])){
                i++;
                if(j<i) break;
            }
            
            while(!isvowel(s[j])) {
                j--;
                if(j<i) break;
            }
            
            if(i<=j) {
                swap(s[i], s[j]);
                i++; j--;
            }
             
        }
        
        return s;
    }
};
