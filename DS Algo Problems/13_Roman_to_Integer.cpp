//13. Roman to Integer

/*Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

 

Example 1:

Input: s = "III"
Output: 3
Example 2:

Input: s = "IV"
Output: 4
Example 3:

Input: s = "IX"
Output: 9


*/
//code:

class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        int i=0;
        while(i<=s.size()-1){
            if(i!=s.size()-1){
                cout<<sum<<"\t";
                  if(s[i]=='I'){
                     if(s[i+1]=='V' || s[i+1]=='X') sum=sum-1;
                     else sum=sum+1;
                    
                 }

                if(s[i]=='X'){
                    if(s[i+1]=='L' || s[i+1]=='C') sum=sum-10;
                    else sum=sum+10;
                    
                } 

                if(s[i]=='C') {
                    if(s[i+1]=='D' || s[i+1]=='M')  sum=sum-100;
                    else  sum=sum+100;
                    
                }
                
                if(s[i]=='V')  sum=sum+5;
                if(s[i]=='L')  sum=sum+50;              
                if(s[i]=='D')  sum=sum+500;
                if(s[i]=='M')  sum=sum+1000;
                
                
            }else{
                switch(s[i]){
                        case 'X':{
                            sum=sum+10;
                            break;       
                        }
                        
                        case 'I':{
                            sum=sum+1; break;       
                        }
                        
                        case 'V':{
                            sum=sum+5; break;       
                        }
                        
                        case 'L':{
                            sum=sum+50; break;       
                        }
                        
                        case 'C':{
                            sum=sum+100; break;       
                        }
                        
                        case 'D':{
                            sum=sum+500; break;       
                        }
                        
                         case 'M':{
                            sum=sum+1000; break;       
                        }
                }
            }
            //cout<<sum<<"\t";
            i++;
        }
        
           return sum;    
           
    }
};
