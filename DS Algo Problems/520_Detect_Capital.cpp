//520. Detect Capital

/*
We define the usage of capitals in a word to be right when one of the following cases holds:
All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Given a string word, return true if the usage of capitals in it is right.

 

Example 1:

Input: word = "USA"
Output: true
Example 2:

Input: word = "FlaG"
Output: false


*/

//code:: 


class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int i =0 , count =-1,flag=-1;
        while(i<word.size()){
            cout<<flag<<" "<<count<<"\n";
            if('A'<= word[i] && word[i] <='Z'){
                if(count==0) return false;
                else flag++;
            }else {
                if(flag>0) return false;
                else count =0;
            }
            
            i++;
        }
        return true;
    }
};

