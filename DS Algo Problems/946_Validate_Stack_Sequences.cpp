/*946. Validate Stack Sequences

Given two integer arrays pushed and popped each with distinct values, return true if this could have been the result of a sequence of push and pop operations on an initially empty stack, or false otherwise.

 

Example 1:
Input: pushed = [1,2,3,4,5], popped = [4,5,3,2,1]
Output: true
Explanation: We might do the following sequence:
push(1), push(2), push(3), push(4),
pop() -> 4,
push(5),
pop() -> 5, pop() -> 3, pop() -> 2, pop() -> 1

Example 2:
Input: pushed = [1,2,3,4,5], popped = [4,3,5,1,2]
Output: false
Explanation: 1 cannot be popped before 2.

*/

//code::

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0,j=0;
        stack<int> result;
        if(!pushed.empty())
             result.push(pushed[i]);
        while(i!=pushed.size() && j<popped.size()){
            if(result.empty()){
                i++;
                result.push(pushed[i]);
            }
            if(result.top()==popped[j]){
                result.pop();
                j++;
            }else{
                if(i!=pushed.size()-1){
                    i++;
                    result.push(pushed[i]);  
                }else
                    i++;
                //i++;
                //result.push(pushed[i]);
            }
        }
        if(!result.empty()){
            return false;
        }
        return true;
    }
};
