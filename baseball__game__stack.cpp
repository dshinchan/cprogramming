/* You are keeping score for a baseball game with strange rules. The game consists of several rounds, where the scores of past rounds may affect future rounds' scores.

At the beginning of the game, you start with an empty record. You are given a list of strings ops, where ops[i] is the ith operation you must apply to the record and is one of the following:

An integer x - Record a new score of x.
"+" - Record a new score that is the sum of the previous two scores. It is guaranteed there will always be two previous scores.
"D" - Record a new score that is double the previous score. It is guaranteed there will always be a previous score.
"C" - Invalidate the previous score, removing it from the record. It is guaranteed there will always be a previous score.
Return the sum of all the scores on the record.*/

class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack <int> x;
        int i=0,sum=0,z=0;
        while(i<ops.size()){
            if(ops[i]!="C" && ops[i]!="D" && ops[i]!="+"){
                int mynt=stoi(ops[i]);
                x.push(mynt);
                sum=sum+x.top();
            }else{
                if(ops[i]=="C"){
                    sum=sum-x.top();
                    x.pop();
                }else{
                    if(ops[i]=="D"){
                        x.push(x.top()*2);
                        sum=sum+x.top();
                    }else{
                            int k=0;
                            z=x.top();
                            k=k+x.top();
                            x.pop();
                            k=k+x.top();
                            x.push(z);
                            x.push(k);
                            sum=sum+k;
                    }
                }
            }
            i++;
        }
        return sum;
    }
};
