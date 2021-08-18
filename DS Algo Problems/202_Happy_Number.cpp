/*202. Happy Number
Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.

 

Example 1:
Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

Example 2:
Input: n = 2
Output: false

*/

//logic:


/*The sum of digits square will not be end up with 1 if there exist a cycle.
            like 2->4->58->89->145->42->20->4
            here we can easily see the cycle from 4 to 4.
            so this is the core logic
*/


//code::

class Solution{
public:
    bool isHappy(int n){
         int x =0, y=0;
         if(n==1) return true;
         if(1<n && n<7) return false;
         while(1){
         x = n%10;
         y= pow(x,2) + y;
        
            if(n==0){
               cout<<y<<" ";
               if(y==1) return true;
               if(y==4) return false;
               n=y;
               cout<<n<<" ";
               y=0;
            
            }else n=n/10;
        
         }
         return false;
    }
};

