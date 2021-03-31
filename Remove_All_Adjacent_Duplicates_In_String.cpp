// Remove All Adjacent Duplicates In String //

class Solution {
public:
    string removeDuplicates(string S) {
        stack <char> result;
        string X = "";
        int i=0;
        while(i<S.size()){
            if(result.empty() || S.at(i)!=result.top()){
                result.push(S[i]);
                i++;
            }else{
                result.pop();
                i++;
            }
        }
        if(result.empty())
            return "";
        else{
            while(!result.empty())
            {
               X = result.top()+X;
                result.pop();
            } 
        }
        return X;
    }
};
