//1002. Find Common Characters

/* 
Given a string array words, return an array of all characters that show up in all strings within the words (including duplicates). You may return the answer in any order.

 

Example 1:

Input: words = ["bella","label","roller"]
Output: ["e","l","l"]
Example 2:

Input: words = ["cool","lock","cook"]
Output: ["c","o"]

*/

//code:


class Solution {
public:
    vector<string> commonChars(vector<string>& s) {
        vector<int> main(26);
        vector<string> ans;
        for(int j=0;j<s[0].size();j++){
            int x =s[0][j]-'a';
            main[x]= INT_MAX;
        }
        
        for(int i=0;i<s.size();i++){
            vector<int> help(26);
            for(int j=0;j<s[i].size();j++){
                int x =s[i][j]-'a';
                help[x]++;
            }
            for(int l=0 ; l<26;l++){ main[l]=min(help[l],main[l]); }
        }
        int j=0;
        while(j!=s[0].size()){
            int x =s[0][j]-'a';
            if(main[x]!=0){
                string s = "";
                char A = x + 'a';
                s += A;
                ans.push_back(s);
                main[x]--;
            }else j++;
        }
        return ans;
    }
};

