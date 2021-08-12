//1323. Maximum 69 Number

/*Given a positive integer num consisting only of digits 6 and 9.

Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).

 

Example 1:

Input: num = 9669
Output: 9969
Explanation: 
Changing the first digit results in 6669.
Changing the second digit results in 9969.
Changing the third digit results in 9699.
Changing the fourth digit results in 9666. 
The maximum number is 9969.
Example 2:

Input: num = 9996
Output: 9999
Explanation: Changing the last digit 6 to 9 results in the maximum number.
Example 3:

Input: num = 9999
Output: 9999
Explanation: It is better not to apply any change.

*/

//code::

class Solution {
public:
    int maximum69Number (int num) {
        int ans=0,y=1;
        stack<int> help;
        while(y!=0){
            y=num%10;
            help.push(y);
            num=num/10;
            cout<<y<<"\t";
        }
        while(!help.empty()){
            //cout<<help.top();
            if(help.top()==6 && y==0){
                help.pop();
                help.push(9);
                y=1;
            }
            //cout<<"lll";
            ans=ans*10+help.top();
            help.pop();
        }
        return ans;
    }
};

