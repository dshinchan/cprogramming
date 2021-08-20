/*788. Rotated Digits
An integer x is a good if after rotating each digit individually by 180 degrees, we get a valid number that is different from x. Each digit must be rotated - we cannot choose to leave it alone.

A number is valid if each digit remains a digit after rotation. For example:

0, 1, and 8 rotate to themselves,
2 and 5 rotate to each other (in this case they are rotated in a different direction, in other words, 2 or 5 gets mirrored),
6 and 9 rotate to each other, and
the rest of the numbers do not rotate to any other number and become invalid.
Given an integer n, return the number of good integers in the range [1, n].

 

Example 1:
Input: n = 10
Output: 4
Explanation: There are four good numbers in the range [1, 10] : 2, 5, 6, 9.
Note that 1 and 10 are not good numbers, since they remain unchanged after rotating.

Example 2:
Input: n = 1
Output: 0

Example 3:
Input: n = 2
Output: 1

*/

//code::

class Solution {
public:
    int rotatedDigits(int n) {
        int count=0;
        if(n<10){
            for(int i=2;i<=n;i++){ if(i==2||i==5||i==6||i==9) count++; }
        }else{
            count=4;
            for(int i=12; i<=n ;i++){
                int flag=2;
                int x=i;
                while(x!=0){
                    int y=x%10;
                    cout<<y<<"\t";
                    //cout<<i<<" "<<y<<" "<<x<<" "<<flag<<endl;
                    if(y==3||y==7||y==4){
                        flag=0;
                        break;
                    }
                     if( flag!=1 && (y==1 || y==8 ||  y==0)){ flag=2; }
                     
                    
                     if( y==2||y==5||y==6 || y==9 ){ flag = 1; }
                     
                    x=x/10;
                    cout<<"\t"<<flag<<endl;
                }
                //cout<<flag;
                if(flag == 1){ 
                    count++;
                    //cout<<i<<"\t"<<count<<"\n";
                }
            }
        }
        return count;
    }
};
